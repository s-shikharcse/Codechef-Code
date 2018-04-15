#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,q,L,R,a[500005],type,x,y,l,r;

	cin>>n>>q>>L>>R;

	memset(a,0,sizeof(a));

	while(q--){
		long long count =0 ;
		cin>>type;
		if(type==1){
			cin>>x>>y;
			a[x-1] = y;
		}
		else{
			cin>>l>>r;
			
			for(int i=l-1;i<=r-1;i++){
				int max=a[i];
				if(max<L or max>R)
					continue;
				for(int j=i;j<=r-1;j++){
					for(int k=i;k<=j;k++)
						max = (a[k]>max)? a[k]:max;				
					if(max>=L and max<=R)
						count++;
					//else
					//	break;
				}
			}
			cout<<count<<"\n";
		}
	}
}