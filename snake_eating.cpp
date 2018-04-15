#include<iostream>
#include<algorithm>

using namespace std;

int binarySearch(int *a, int low, int high,int query)
{
	int successor=0;
	int flag=0;
	while(low<=high)
	{
		int mid = (low+high)/2;
		if(a[mid]>query)
		{
			successor = mid;
			high = mid-1;
		}
		else if(a[mid]<query)
		{
			low = mid+1;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	if(flag==1)
		return mid;
	else
		return successor;
}


int main()
{
	int t,n,q,query;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		int *a = new int[n];
		
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		sort(a,a+n);
        
        for(int i=0;i<q;i++)
        {
        	int ans = 0;
        	int pos = -1;
        	cin>>query;
        	/*for(int j=0;j<n;j++)
        	{
        		if(query>a[j])
        			continue;
        		else
        		{
        			pos=j;
        			break;
        		}
        	}*/

        	if(pos!=-1)
        		ans = n-pos;
        	else 
        		pos = n;	
        	for(int k=pos-1;k>=0;k--)
        	{
        		if(query-a[k]<=k)
        		{
        			ans++;
        			k=k-(query-a[k]);
        		}
        	}
        	cout<<ans<<endl;
        }
	}
}