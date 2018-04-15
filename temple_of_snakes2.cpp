#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int count = 0; 
		cin>>n;
		int *a = new int[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int max_index = max_element(a,a+n) - a;
		int left = max_index;
		int right = (n-1) - max_index;
        int mid = 0;
        
		if(((left==0)||(right==0))&&(n%2==0))
		{
			count += a[max_index];
  			a[max_index] = 0;
            n=n-1;
		}
		if(n%2!=0)
        {
          mid = n/2 ;
          max_index = mid;	 
          left = max_index;
          right = (n-1) - max_index;   
		}
		if((left <= right)&&(a[max_index] > left))
		{
			int temp= max_index;
			for(int i=0;i<max_index;i++)
			{
				if(a[i]>i+1)
					count += a[i] - (i+1);
			}

			if(a[max_index]>max_index+1){
				count += a[max_index] - (max_index+1);
			}

			for(int i=max_index+1;i<max_index+left+1;i++,temp--)
			{
				if(a[i]>temp)
					count += a[i] - temp;
			}
			for(int i=max_index+left+1;i<n;i++)
			{
				count += a[i];
			}
		}
		else if((right<left)&&(a[max_index] > right))
		{
			for(int i=0;i<max_index-right;i++)
			{
				count += a[i];
			}	
			int inc = 1;
			for(int i=max_index-right;i<max_index;i++,inc++)
			{
				if(a[i]>inc)
					count += a[i] - inc;
			}

			if(a[max_index] > inc)
				count += a[max_index] - inc;
		
			for(int i=max_index+1,dec=inc-1;i<max_index+right+1;i++,dec--)
			{
				if(a[i]>dec)
					count += a[i] - dec;
			}

		}
     
     cout<<count<<endl;   
	}

}