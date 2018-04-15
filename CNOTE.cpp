#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t, x, y, k, n, pg_req = 0, p[100005], c[100005];

	cin>>t;
	while(t--){
		cin>>x>>y>>k>>n;
		bool result = false;
		pg_req = x-y;
		for(int i=0;i<n;i++){
			cin>>p[i]>>c[i];
			if((c[i] <= k) and (p[i] >= pg_req))
				result = true;
		}
		if(result)
			cout<<"LuckyChef\n";
		else
			cout<<"UnluckyChef\n";
	}
}