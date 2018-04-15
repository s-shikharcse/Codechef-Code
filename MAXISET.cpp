#include <bits/stdc++.h>
using namespace std;

int a[35],size[35];

void initialization(int n){
	for(int i=0;i<n;i++){
		a[i] = i;
		size[i] = 1;
	}
}

int root(int x){
	while(a[x]!=x){
		a[x] = a[a[x]];
		x = a[x];
	}
	return x;
}

void weighted_union(int x, int y){
	int root_x = root(x);
	int root_y = root(y);

	if(size[root_x]<=size[root_y]){
		a[root_x] = a[root_y];
		size[root_y] += size[root_x]; 
	}
	else{
		a[root_y] = a[root_x];
		size[root_x] += size[root_y];
	}
}

/*bool find(int x, int y){
	if(root(x) == root(y))
		return true;
	else
		return false;
}*/

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,m,v,u,q,v_weight[35];
	cin>>t;

	while(t--){
		cin>>n>>m;
		initialization(n);
		vector<int>edge[n];
		for(int i=0;i<n;i++){
			cin>>v_weight[i];
		}
		for(int i=0;i<m;i++){
			cin>>u>>v;
			edge[u].push_back(v);
			edge[v].push_back(u);
			weighted_union(u,v);
		}

		cin>>q;
		
		int input[35],input_root[35];
		vector<int> ans[35];

		while(q--){
			unsigned long long maxiweight = 0;
			int size;
			cin>>size;
			for(int k=0;k<35;k++){
				ans[k].clear();	
			}
			for(int j=0;j<size;j++){
				cin>>input[j];
			}
			for(int j=0;j<size;j++){
				input_root[j] = root(input[j]);
				ans[input_root[j]].push_back(v_weight[input[j]]);
				//cout<<"input_root[j] = "<<input_root[j]<<" : "<<v_weight[input[j]]<<endl;
			}

			int max = INT_MIN;
			for(int j=1;j<=size;j++){
				if(ans[j].size()==0)
					continue;
				else if(ans[j].size()==1)
					maxiweight += ans[j][0];
				else{
					/*for(int k=0;k<ans[j].size();k++){
						if(max < v_weight[ans[j][k]])
							max = v_weight[ans[j][k]];
 					}
 					maxiweight += max;*/	
					int max_pos = max_element(ans[j].begin(),ans[j].end()) - ans[j].begin();
					maxiweight += ans[j][max_pos];
 				}
			}
		cout<<maxiweight<<"\n";
		}
		cout<<"\n";
	}
}