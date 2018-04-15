#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int s,n;
    vector<int>v;
    cin>>s;
    while(s--)
    {
        int count=0, flag=0, mid=0; 
        cin>>n;
        int *a = new int[n];
        for(int i=0;i<n;i++) cin>>a[i];

        if(n%2!=0) 
        {
            if((a[0]==1)&&(a[n-1]==1))  
            {
                 mid = (n+1)/2;
                
                for(int i=0;i<mid-1;i++) /*for increasing towards center*/
                {
                    if(a[i+1]-a[i]!=1)
                    {
                        v.push_back(i);
                    }

                }   
                for(int i=mid-1;i<n;i++) /*for decreasing from center to right end*/
                {
                    if(a[i]-a[i+1]!=1)
                    {
                        v.push_back(i);
                    }
                }         
            }
            else /*when ((a[0] and a[n]) !=1 )*/
                {
                    if(a[0]!=1)
                      count += a[0] -1;
                    if(a[n-1]!=1)
                      count += a[n-1] -1;
                }
            
            for(int i=0;i<v.size();i++)
            {
                if(v[i]<=mid-1)
                    count += a[v[i]] - (a[v[i]-1]+1);
                else
                    count += a[v[i]] - (a[v[i]-1]-1); 
            }
        }
        else 
        {
            int *max = max_element(a,a+n);
            int left = *max - 0;
            int right = (n-1) - (*max); 
             
        } 
     cout<<count<<endl;       
    }
}