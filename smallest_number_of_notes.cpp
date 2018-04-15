#include<iostream>
using namespace std;

int main()
{
	int t,n,notes;
	cin>>t;
	while(t--)
	{
		notes = 0;
		cin>>n;
		if(n>=100)
		{
			notes += n/100;
			n = n%100;
		}
	    if(n>=50)
		{
			notes += n/50;
			n = n%50;
		}
		if(n>=10)
		{
			notes += n/10;
			n = n%10;
		}
		if(n>=5)
		{
			notes += n/5;
			n = n%5;
		}
		if(n>=2)
		{
			notes += n/2;
			n = n%2;
		}
		else 
		{
			notes += n/1;
		}

		cout<<notes<<endl;
	}
}