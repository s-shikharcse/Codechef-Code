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
		int *a = new int[2*n];
		int *b = new int[n];
		for(int i=0;i<2*n;i++)
			cin>>a[i];
        if(n>2)
        {
        int mid = n-1;
        if(a[mid]>a[mid-1])
        	swap(a[mid],a[mid-1]);
        if(a[mid+1]<a[mid+2])
        	swap(a[mid+1],a[mid+2]);
        }
	   for(int i=0;i<n;i++)
	   {
	   	if(a[2*i]>a[2*i+1])
	   	    b[i] = a[2*i];
	   	else
	   		b[i] = a[2*i+1];
	   }
	   cout<<b[(n+1)/2]<<endl;
	   for(int i=0;i<2*n;i++) 
	   cout<<a[i]<<" ";
	   cout<<endl;	
	}

return 0;
}