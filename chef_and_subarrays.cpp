#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,a[50];
	cin>>t;
    
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];

		int count=0;
		for(int i=0;i<n;i++){
			int sum=0 ,prod=1;
			for(int j=i;j<n;j++){
					
					
						sum += a[j];
					    prod *= a[j];
					    if(sum==prod){
				count++;
			
					}
			
			}			

		}
		
	cout<<count<<"\n";		
	}
		
		
}