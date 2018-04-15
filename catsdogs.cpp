#include<iostream>
using namespace std;

int main()
{
	int t,c,d,l,actual_leg,min_leg;
	cin>>t;
	while(t--)
	{
         cin>>c>>d>>l;
         actual_leg = (c+d)*4;
         if(actual_leg == l)
         	{
         		cout<<"yes"<<endl;
         		continue;
         	}
         else 
         {
         	if(l%4==0)
         	{
         		if(c/2<=d)
         		{
         			min_leg = actual_leg - c*4;
         		    if((l>=min_leg)&&(l<actual_leg))
         		    	cout<<"yes"<<endl;
         		    else
         		    	cout<<"no"<<endl;
         		}
         		else 
         		{
         			min_leg = actual_leg - (2*d)*4;
         			if((l>=min_leg)&&(l<actual_leg))
         	         	cout<<"yes"<<endl;
         	        else
         	            cout<<"no"<<endl;		    
         			
         		}
             
         	}
         	else
         		cout<<"no"<<endl;
         }

	}

}
