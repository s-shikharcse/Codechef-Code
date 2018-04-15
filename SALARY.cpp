#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,w[109],avg;
	unsigned long long int sum,nom;
	cin>>t;
	while(t--){
		sum = 0;
		nom = 0;	
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>w[i];
		}
		sort(w,w+n);
		for(int i=0;i<n;i++){
			nom +=  w[i] - w[0];
		}
		cout<<nom<<"\n";
	}
}