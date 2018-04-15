#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t,n,k,len;
	cin>>t;
	while(t--){
		long long int count=0;
		cin>>n>>k;
		int **a = new int*[n];
		for(int i=0;i<n;i++){
			cin>>len;
			a[i] = new int[len];
			for(int j=0;j<len;j++){
				cin>>a[i][j];
			} 
			sort(a[i],a[i]+len);
		}

		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int p=0,q=0;
				int *un = new int[k];
				for(int m=0;m<k;m++){
					if(a[i][p]==a[j][q]){
						un[m] = a[i][p];
						p++;
						q++;
					}
					else{
						un[m] = a[i][p];
						p++;
						un[m] = a[j][q];
						q++;
					}
				}
				if((sizeof(un)/sizeof(un[0])==k))
					count++;
			}
		}
		cout<<count<<endl;


	}
}