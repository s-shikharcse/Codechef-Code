#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,k,a[110],count;
	cin>>t;
	while(t--){
		count = 0;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
			a[i] += k;
			if(a[i]%7 == 0)
				count++;
		}
		cout<<count<<endl;
	}
}