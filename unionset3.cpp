#include <iostream>
using namespace std;

int main(){
	int t,n,k,len,element,count;
	cin>>t;
	while(t--){
		int ans = 0;
		cin>>n>>k;
		long long int set[n][157];
		for (int i=0;i<n;i++)
		{
			cin>>len;
			for(int j=0;j<len;j++){
				cin>>element;
				set[i][element] = true;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				count = 0;
				for(int m=0;m<=k;m++){
					if((set[i][m]==false)and(set[j][m]==false)){
						continue;
					}
					else
						count++;

				}
				if(count==k)
					ans++;
			}
		}
cout<<ans<<endl;
	}
}