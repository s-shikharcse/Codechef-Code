#include <bits/stdc++.h> 
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t;
	string s;
	cin>>t;
	while(t--){
		int left[27];
		int right[27];
		memset(left,0,sizeof(left));
		memset(right,0,sizeof(right));
		bool flag = true;
		cin>>s;
		int len = s.length();

		if(len%2 != 0){
			int mid = (len-1)/2;
			for(int i=0;i<mid;i++){
				left[s[i]-97]++;
				right[s[i+mid+1]-97]++;
			}
		}
		else{
			int mid = len/2;
			for(int i=0;i<mid;i++){
				left[s[i]-97]++;
				right[s[i+mid]-97]++;
			}
		}
		for(int i=0;i<27;i++){
			if(left[i] != right[i]){
				flag = false;
				break;
			}
		}
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}