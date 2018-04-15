#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,c,a[110];
	unsigned long long int sum;
	cin>>t;
	while(t--){
		sum = 0;
		cin>>n>>c;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum += a[i];
		}
		if(c>=sum)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}