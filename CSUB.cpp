#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n;
	long long count;
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		cin>>s;
		count = 0;
		for(int i=0;i<n;i++){
			if(s[i]=='1')
				count++;
		}
		cout<<(count*(count+1))/2<<"\n";
	}
}