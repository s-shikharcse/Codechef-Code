#include<iostream>
using namespace std;

int main()
{


	int t,n,m,left;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		left = n - 2*m;
        int *a = new int[2*m]; 
		for(int i=0;i<2*m;i++)
			cin>>a[i];
		if(left%2==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}