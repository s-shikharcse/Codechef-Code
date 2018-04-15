    #include <bits/stdc++.h>
    using namespace std;
     
    int main(){
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);cout.tie(NULL);
     
    	int t,n,k,len;
    	
    	cin>>t;
    	while(t--){
    		cin>>n>>k;
    		map<string, bool>check;
    		string str;
            for(int i=0;i<n;i++){
    			cin>>str;
    			check[str] = false;
    		}
     
    		while(k--){
    			cin>>len;
    			for(int i=0;i<len;i++){
    				cin>>str;
    				if(check.find(str) != check.end()){
    					check[str] = true;
    				}
    			}
    		}
     
    		for(int i=0;i<n;i++){
    			if(check[str] == true)
    				cout<<"YES ";
    			else
    				cout<<"NO ";
     
    		}
    	}
    } 

