#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string s;
 
    for(int i=0;i<t;i++)
    {
    	cin>>s;
    	int C = s.find("C");
    	int E = s.find("E");
    	int S = s.find("S");
     	if((S>E)&&(E>C)&&(S>C))
    		cout<<"yes"<<endl;
    	else if((S>C)&&(E==-1))
    		cout<<"yes"<<endl;
    	else if((S>E)&&(C==-1))
    		cout<<"yes"<<endl;
    	else if((E>C)&&(S==-1))
    		cout<<"yes"<<endl;
    	else if((C==0)&&(E==-1)&&(S==-1))
    		cout<<"yes"<<endl;
    	else if((E==0)&&(C==-1)&&(S==-1))
    		cout<<"yes"<<endl;
    	else if((S==0)&&(E==-1)&&(C==-1))
    		cout<<"yes"<<endl;
    	else
    		cout<<"no"<<endl;
    }  
}