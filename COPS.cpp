#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t,m,x,y,a[15],noh,safe,tail;
	cin>>t;
	while(t--){
		safe = 0; 
		cin>>m>>x>>y;
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		sort(a,a+m);
		noh = x*y;
        
		if(noh < a[0])
			safe += (a[0]-noh) - 1;
		tail = a[0] + noh;

		for(int i=1;i<m;i++){
			if(tail>=100)
				break;
			if(tail < a[i]-noh)
				safe += (a[i]-noh-1) - (tail) ;
			tail = a[i] + noh;
		}
		if(tail<100)
			safe += 100 - tail;
		cout<<safe<<"\n";
	}
}