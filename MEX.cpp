#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,k;
	int  input [200002];
	cin>>t;

	while(t--){
		bool a[200002];
		fill(a,a+200002,false);
		int count = 1;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>input[i];
			a[input[i]] = true; 
		}
		int i;
		for(i=0;i<200002;i++){
			if(a[i]==true) 
			    continue;
			if(k==0)
				break;
			
			if(count <= k)
				count++;
			else if(count > k){
				count = i;
				break;
			 } 
		}

		if(k==0)
			cout<<i<<"\n";
		else
			cout<<count<<"\n";
	}
}