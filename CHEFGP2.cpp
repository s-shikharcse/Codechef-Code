#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	ll t,x,y;
	string s;
	char kiwi = '*';
	cin>>t;

	while(t--){
		cin>>s;
		ll len = s.length();
		cin>>x>>y;

		ll start = min(x,y);
		stack<ll> apples_hash;
		stack<ll> bananas_hash;
		ll apples_no = 0, bananas_no = 0; 
		
		for(ll i=0;i<len;i++){
			if(s[i]=='a'){
				apples_no++;
				apples_hash.push(i);
			}
			else{
				bananas_no++;
				bananas_hash.push(i);
			}
		}

		ll k,increased_len = 0;
		for(ll i=0;i<len+increased_len-1;i++){
			bool flag = false;

			if(s[i]=='*')
				continue;
			if(s[i]=='a'){
				//apples_no--;
				k = ((i+x) > (len+increased_len-1))? len+increased_len-1:i+x;	
				for(ll j=i+1;j<=k;j++){
					if(s[j]=='b' || s[j]=='*'){
						flag = true;
						break;
					}
				}

				if(!flag){
					if(bananas_no > 0){
						s[k] = 'b';
						if(!bananas_hash.empty() and bananas_hash.top()>i){
							s[bananas_hash.top()] = 'a';
							bananas_hash.pop();	
						}	
						bananas_no--;
					}
					else{
						increased_len++;
						s.insert(k,1,kiwi);
					}					
				}		
			}
			else{
				//bananas_no--;
				k = ((i+y) > (len+increased_len-1))? len+increased_len-1:i+y;
				for(ll j=i+1;j<=k;j++){
					if(s[j]=='a' || s[j]=='*'){
						flag = true;
						break;
					}
				}
				if(!flag){
					if(apples_no>0){
						s[k] = 'a';
						if(!apples_hash.empty() and apples_hash.top()>i){
							s[apples_hash.top()] = 'b';
							apples_hash.pop();
						}
						apples_no--;
					}
					else{
						increased_len++;
						s.insert(k,1,kiwi);
					}
				}
			}
		}
		cout<<s<<"\n";
	}
}