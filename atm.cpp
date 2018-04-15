#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int x;
	float y;
	cin>>x>>y;
	if(x%5!=0)
		printf("%0.2f",y);
	else
	{
		float yy = y-x-0.50;
        if(yy>0)
        printf("%0.2f",yy);
        else
        	printf("%0.2f",y);
	}
}