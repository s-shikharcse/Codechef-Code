#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	string str;
	cin>>t;
	while(t--){
		cin>>str;
		int len = str.length();
		stack<char>s;
		unsigned long long valid = 0,count = 0 ;
		for(int i=0;i<len;i++){
			if(str[i]=='<')
				s.push(str[i]);
			else if((s.empty() and str[i]=='>') and (count==0)){
				valid = 0;
				break;
			}
			else if((s.empty() and str[i]=='>') and(count!=0)){
				break;
			}
			else if(!s.empty() and str[i]=='>'){
				s.pop();
				valid+=2;
				count++;
			}
		}
		if(s.empty())
			cout<<valid<<"\n";
		else
			cout<<0<<"\n";
	}
}