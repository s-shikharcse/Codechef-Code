#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int a[] = {1,2,3,4,3,2,1};
	int max = max_element(a,a+7) - a;
	cout<<max<<endl;
}