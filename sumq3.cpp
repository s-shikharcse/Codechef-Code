#include<iostream>
#include<algorithm>
#define MOD 1000000007 
using namespace std;
 
int main(){
	int t,p,q,r;
	cin>>t;
	while(t--){
		int sum = 0;
		cin>>p>>q>>r;
		int *a = new int[p];
		int *b = new int[q];
		int *c = new int[r];
		for(int i=0;i<p;i++) cin>>a[i];
		for(int i=0;i<q;i++) cin>>b[i];
		for(int i=0;i<r;i++) cin>>c[i];
        
        sort(a,a+p);
        sort(b,b+q);
        sort(c,c+r);
         
	    int lastIndexA=0, lastIndexC=0;
		for(int i=0;i<q;i++)
		{
			int sumC=0, sumA=0, countA=0, countC=0;
			for(int j=lastIndexA;j<p;j++){
				if(b[i]>=a[j]){
					sumA += a[j];	
					countA++;
				}
				//else lastIndexA = j;
 
			}	
			for(int j=lastIndexC;j<r;j++){
w				if(b[i]>=c[j]){
					sumC += c[j];
					countC++;
				}
				//else lastIndexC = j;
			}
			sum += ((sumA + countA*b[i])*(sumC + countC*b[i]))%MOD;
		}
		cout<<sum%MOD<<endl;	
	}
} 
