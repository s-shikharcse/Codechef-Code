#include<iostream>
#include<algorithm>
 
 using namespace std;
 
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int *a = new int[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int *max = max_element(a,a+n);
		cout<<n-(*max)<<endl;
	}
} 