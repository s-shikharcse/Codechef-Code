#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,nos,input;
	cin>>n>>m;

	//map<int,bool>stamps;
	vector<int> v[21];
	for(int i=0;i<m;i++){
		cin>>nos;
		for(int j=0;j<nos;j++){
			cin>>input;
			v[i].push_back(input);
		}
	}
	int max=INT_MIN, bits;
	for(int i=0;i<(1<<m);i++){
		map<int,bool> stamps;
	    bits = 0;
		for(int j=0;j<m;j++){
			bool flag = false;
			if(i & 1<<j){
				bits++;
				for(int k=0;k<v[j].size();k++){
					if(stamps[v[j][k]]){
						flag = true;
						break;
					}
					else 
						stamps[v[j][k]] = 1;
				}
			}
			if(flag) break;
		}
		if(max<bits)
			max = bits;
	}
	cout<<max<<"\n";
} 