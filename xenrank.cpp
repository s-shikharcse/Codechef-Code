#include<iostream>
#define ulli unsigned long long int
using namespace std;

int main(){
	int t,u,v;
	cin>>t;
	while(t--){
		cin>>u>>v;
        ulli n = (u+v);
        ulli ver_rank = ((n*(n+1))/2) + 1;
        ulli max_rank = ver_rank + (n-v);  
        cout<<max_rank<<endl; 
	}
}