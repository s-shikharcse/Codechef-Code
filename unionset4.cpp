#include <iostream>
#include <set>
#include <algorithm>
 
using namespace std;
 
int main(){
	long long int t,n,k,len,element;
	cin>>t;
	while(t--){
		long long int count = 0;
		cin>>n>>k;
		set< int >s[n];
		for(int i=0;i<n;i++){
			cin>>len;
			for(int j=0;j<len;j++){
				cin>>element;
				s[i].insert(element);
			}
		}
		set<int> un;
		for(int i=0;i<n;i++){
			
			for(int j=i+1;j<n;j++){
				//set_union(s[i].begin(),s[i].end(),s[j].begin(),s[j].end(),inserter(un,un.begin()));
				//un.insert(s[j].begin(),s[j].end());
				un = s[i] + s[j];
				if(un.size()==k)
					count++;
                un.clear();
			}
				
				s[i].clear();
		}
		cout<<count<<endl;
	}
}  