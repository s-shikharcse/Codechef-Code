#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t;
	string s;
	
	cin>>t;

	while(t--){
		char c=' ';
		cin>>s;
		int count_a=0,count_b=0,count_dot=0;
		int len = s.length();

		for(int i=0;i<len;i++){
			if(s[i]=='A'){
				c='A';
				count_a++;
				continue;
			}
			if(s[i]=='B'){
				c='B';
				count_b++;
				continue;
			}
			else{
				count_dot=0;
				while(i<len and s[i]=='.'){
					count_dot++;
					i++;
				}
				if(i<len and (s[i]=='A' and c=='A'))
					count_a+=count_dot;
				else if(i<len and (s[i]=='B' and c=='B'))
					count_b+=count_dot;
			i--;
			}
		}
		cout<<count_a<<" "<<count_b<<"\n";
	}

}	