#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int t,n,a[110],mid;
	bool flag;
	cin>>t;
	while(t--){
		flag = true;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n%2 != 0){
			mid = (n-1)/2;
			int j=0;
			for(int i=0;i<mid;i++){
				if((a[j+mid] != a[mid-j]) or (a[j+mid] - a[j+mid-1] < -1)){
					flag = false;
					break;
				}
				j++;
			}
		}
		else{
			int mid1 = n/2;
			int mid2 = mid1 + 1;
			int j = 0;
			for(int i=0;i<mid1;i++){
				if((a[mid1-j] != a[mid2+j]) or (a[mid1-j+1] - a[mid1-j] > 1)){
					flag = false;
					break;
				}
				j++;
			}	
		}
	if(flag)
		cout<<"yes\n";
	else
		cout<<"no\n";
	}
}