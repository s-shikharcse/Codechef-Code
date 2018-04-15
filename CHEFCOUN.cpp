#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n;
	unsigned long long i;
	cin>>t;
	while(t--){
		cin>>n; 
		for(i=1;i<=n/2;i++){
			cout<<i<<" ";
		}
		int itr = n-n/2;
		i = (1<<31)-itr-1;
		while(itr){
			cout<<i<<" ";
			i++;
			itr--;
		}
		cout<<"\n";
	}
}