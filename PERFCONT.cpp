#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,p,a[510];
	
	cin>>t;
	
	while(t--){
		int cake = 0, hard = 0;
		cin>>n>>p;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>=p/2){
				cake++;
			}
			else if(a[i]<=p/10){
				hard++;
			}
		}
		if(cake==1 and hard==2)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
}