#include <iostream>
#include <algorithm>
#include <functional>
 
using namespace std;
int main(){
	long long int t,p,q,r;
	cin>>t;
	while(t--){
		bool flag=false;
        long long int sum = 0;
		cin>>p>>q>>r;
		long long int *a = new long long int[p];
		long long int *b = new long long int[q];
		long long int *c = new long long int[r];
 
		for(long long int i=0;i<p;i++)
			cin>>a[i];
		for(long long int i=0;i<q;i++)
			cin>>b[i];
		for(long long int i=0;i<r;i++)
			cin>>c[i];
		sort(a,a+p);
		sort(b,b+q,greater<int>());
		sort(c,c+r);
		
   		for(long long int i=0;i<p;i++){
   			for(long long int j=0;j<q;j++){
   				if(b[j]>=a[i]){
   					for(long long int k=0;k<r;k++){
   						if(b[j]>=c[k])
   							sum = (sum + ((a[i]+b[j])*(b[j]+c[k])))%1000000007;
                    	else if(b[j]<c[k]) break;  
   				      }
   				   }   
   				else if(b[j]<a[i]) break;
   			}
  	 		}
   			cout<<sum<<endl;
   	}
} 