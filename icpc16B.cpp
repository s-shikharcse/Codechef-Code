#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
    {
     int flag=0;
     int fflag=0;
     int product;

     cin>>n;
     int *a = new int[n];
     
     for(int i=0;i<n;i++)
     	cin>>a[i];
     
     for(int i=0;i<n;i++)
     {
     	for(int j=i+1;j<n;j++)
     	{
     		product = a[i]*a[j];
     	}
     }