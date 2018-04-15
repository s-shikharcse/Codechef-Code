#include<bits/stdc++.h>
#define MAX 5*100000
using namespace std;
int tree[4*MAX+5]={0},array[MAX],n,k;

int gcd(int a,int b){
	if(b==0)
		return a;
	else
		gcd(b,a%b); 
}

void build(int start,int end,int node){
	if(start == end)
		tree[node] = array[start];
	else{
		int mid = (start+end)/2;
		build(start,mid,node*2);
		build(mid+1,end,node*2+1);
		tree[node] = gcd(tree[node*2],tree[node*2+1]);
	}
}

int query(int left,int right,int start,int end,int node){
	if(start>right or end<left)
		return 0;
	else if(start>=left and end<=right)
		return tree[node];
	else{
		int mid = (start+end)/2;
		int p1 = query(left,right,start,mid,node*2);
		int p2 = query(left,right,mid+1,end,node*2+1);
		return gcd(p2,p1);
	}
}

bool check(int x){
	bool flag=false; 
	for(int i=0;i<n-x;i++){
		if(query(i,i+x,0,n-1,1)>=k)
			flag = true;
	}
return flag;	
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>array[i];
	build(0,n-1,1);

	int l=0, r=n-1;
	while(l<=r){
		int m = (l+r)/2;bla
		if(check(m)){
			l=m+1;
		}
		else
			r=m-1;
	}
	cout<<l<<endl;	
}