#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	ll n,d,a[100005],chops=0;
	cin>>n>>d;
	for(ll i=0;i<n;i++)
		cin>>a[i];

	sort(a,a+n);

	for(ll i=0;i<n-1;i++){
		if(a[i+1]-a[i]<=d){
			chops++;
			i++;
		}
	}
	cout<<chops<<"\n";
}