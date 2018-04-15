#include<iostream>
#include<algorithm>
typedef unsigned long long int ulli ;
using namespace std;
 
int main(){
	ulli t,p,q,r;
	cin>>t;
	while(t--){
		ulli sum = 0;
		cin>>p>>q>>r;
		ulli *a = new ulli[p];
		ulli *b = new ulli[q];
		ulli *c = new ulli[r];
		for(ulli i=0;i<p;i++) 
			cin>>a[i];
		for(ulli i=0;i<q;i++) 
			cin>>b[i];
		for(ulli i=0;i<r;i++) 
			cin>>c[i];
        
        sort(a,a+p);
        sort(b,b+q);
        sort(c,c+r);
	    ulli lastIndexA=0, lastIndexC=0;
		for(ulli i=0;i<q;i++){
			ulli sumC=0, sumA=0, countA=0, countC=0; 
			for(ulli j=lastIndexA;j<p;j++){
				if(b[i]>=a[j]){
					sumA = sumA + a[j];	
					countA++;
				}
				/*else {
					lastIndexA = j;
					break;
			    }*/
			}	
			for(ulli j=lastIndexC;j<r;j++){
				if(b[i]>=c[j]){
					sumC = sumC + c[j];
					countC++;
				}
				/*else {
					lastIndexC = j;
					break;
			    }*/			
		    }
		sum = (sum+((sumA + countA*b[i])*(sumC + countC*b[i])))%1000000007;	
	    }
	cout<<sum<<endl;
    }
} 
