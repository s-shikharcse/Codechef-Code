#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int t,n,k,len;
	cin>>t;
	while(t--){
		cin>>n>>k;
        int a[n][k];
		for(int i=0;i<n;i++){
        	 cin>>len;
        	 for(int j=0;j<len;j++){
        	 	cin>>a[i][j];
        	 }
        	 sort(a[i],a[i]+len);
		}
		int elements = 0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[][])

			}
		}

	}
}