#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int s,n;
    cin>>s;
    while(s--)
    {
        int flag = 0;
        cin>>n;
        int *a = new int[n];
        for(int i=0;i<n;i++) cin>>a[i];

        if(n%2!=0) /*able to find unique center*/
        {
            if((a[0]==1)&&(a[n-1]==1))  
            {
                int mid = (n+1)/2;
                
                for(int i=0;i<mid-1;i++) /*for increasing towards center*/
                {
                    if(a[i+1]-a[i]!=1)
                    {
                        flag=1;
                        break;
                    }

                }
                if(flag==1)  /*if fault found in starting to mid sequence*/
                    cout<<"no"<<endl;
                else   /*otherwise check for decreasing sequence*/
                {
                    for(int i=mid-1;i<n;i++) /*for decreasing from center to right end*/
                    {
                        if(a[i]-a[i+1]!=1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0)  /*if no fault in increasing as well as decreasing sequence*/
                        cout<<"yes"<<endl;
                    else
                        cout<<"no"<<endl;    
                }
            }
            else /*when ((a[0] and a[n]) !=1 )*/
                cout<<"no"<<endl;
        }
        else /*when no unique center*/
            cout<<"no"<<endl;   
    }
}