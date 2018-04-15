#include<bits/stdc++.h>
using namespace std;

int a[100005],arr[100005],size[100005];
long long ans = 0;

int n;

void initialize(int n){
	for(int i=0;i<n;i++){
		arr[i]=i;
		size[i]=1;
	}
}

int root(int x){
	while(arr[x]!=x){
		x=arr[x];
		//ans += a[x];
	}
	return x;
}

void weighted_union(int A,int B){
	/*int root_A = root(A);
	int root_B = root(B);
	arr[root_A]=root_B;*/
	int t = arr[A];
/*for(int i=0;i<n;i++){
	if(arr[i]==t)*/
		arr[B]=t;
}

	/*if(size[root_A]<size[root_B]){
		arr[root_A]=arr[root_B];
		size[root_B]+=size[root_A];
	}
	else{
		arr[root_B]=arr[root_A];
		size[root_A]=size[root_B];
	}*/



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int m,x,y;
	cin>>n>>m;

	initialize(n);

	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=0;i<n-1;i++){
		cin>>x>>y;
		weighted_union(x-1,y-1);
	}

    char c;
    int l,r;

	for(int i=0;i<m;i++){
		ans = 0;
		cin>>c;
		if(c=='Q'){
			cin>>l;
			int temp = arr[l-1];
			while(arr[x]!=1)
				if(temp==arr[i])
					ans += a[i];
			}
			//root(l-1);
			cout<<ans<<"\n";
		}
		else{
			cin>>l>>r;
			a[l-1] = r;
		}
	}
}