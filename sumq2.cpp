#include<iostream>
#include<algorithm>
#include<vector>
#define MOD 1000000007 
using namespace std;

int main(){
	int t,p,q,r;
	cin>>t;
	while(t--){
		long long int sum = 0;
		cin>>p>>q>>r;
		vector<int>a;
		vector<int>b;
		vector<int>c;
		for(int i=0;i<p;i++) {
			cin>>a.push_back();
		}
		for(int i=0;i<q;i++) cin>>b.push_back();
		for(int i=0;i<r;i++) cin>>c.push_back();
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        long long int sumC=0, sumA=0, countA=0, countC=0; 
	    long long int lastIndexA=0, lastIndexC=0;
		for(int i=0;i<q;i++)
		{
			for(int j=lastIndexA;j<p;j++){
				if(b[i]>=a[j]){
					sumA += a[j];	
					countA++;
				}
				else {
					lastIndexA = j;
					break;
				}	
			}	
			for(long long int j=lastIndexC;j<r;j++){
				if(b[i]>=c[j]){
					sumC += c[j];
					countC++;
				}
				else {
					lastIndexC = j;
						break;
				}		
			}
			sum += ((sumA + countA*b[i])*(sumC + countC*b[i]))%MOD;
		}
		cout<<sum%MOD<<endl;	
	}
}	