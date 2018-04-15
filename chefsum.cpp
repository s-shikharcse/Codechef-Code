#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,a[100001];
	unsigned long long pref[100001],suff[100001],min,chk;
	cin>>t;
	while(t--){
		memset(pref,0,sizeof(pref));
		memset(suff,0,sizeof(suff));
		cin>>n;

		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		pref[0] = a[0];

		for(int i=1;i<n;i++){
			pref[i] = pref[i-1] + a[i];
		}

		suff[0] = pref[n-1];
		min  = pref[0]+suff[0];
		int ans = 0;

		for(int i=1;i<n;i++){
			suff[i] = suff[i-1] - a[i-1];
			chk = pref[i]+suff[i];
			if(min > chk){
				min = chk;
				ans = i;	
			}	
		}
		cout<<ans+1<<"\n";
	}
}