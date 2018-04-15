#include<bits/stdc++.h>
#define MAX 5*100000+5
using namespace std;

int gcd (int a,int b){
	if(b==0)
		return a;
	else
		gcd(b,a%b);
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[MAX];
	for(int i=0;i<n;i++) cin>>a[i];

	int l=0,r=0,ans=0,temp=0,range=0;
	while(l<n){
		//temp = 0;
		while(r<n and gcd(a[r],temp)>=k){
			temp = gcd(temp,a[r]);
			range = l-r+1;
			r++;
		}
		ans = max(range,ans);
		l++;
	}
	if(temp>=k)
		cout<<ans<<endl;
	else
		cout<<0<<endl;		
}