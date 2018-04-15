#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,k,len;
	string str;
	cin>>t;
	while(t--){
		cin>>n>>k;
		string input[5000];
		set<string>check;
		for(int i=0;i<n;i++){
			cin>>input[i];
		}

		while(k--){
			cin>>len;
			for(int i=0;i<len;i++){
				cin>>str;
				check.insert(str);
			}
		}

		for(int i=0;i<n;i++){
			if(check.find(input[i]) != check.end())
				cout<<"YES ";
			else
				cout<<"NO ";
		}
	}
}