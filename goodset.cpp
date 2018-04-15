#include<iostream>
#include<set>
//#include<algorithm>
using namespace std;

int main(){
	int t,n,a,b,c;
	cin>>t;
	while(t--){
		cin>>n;
		set<int>good;
		//good.clear();
			for(int j=1;j<=500;j++){
				bool flag=false,present=false;
            	if(good.size()!=n){
            	    for(set<int>::iterator a=good.begin();a!=good.end();a++){
            	    	set<int>::iterator temp = a;
            	    	for(set<int>::iterator b=++temp;b!=good.end();b++){
            	    		if((*a+*b)==j){
            	    			present=true;
            	    			flag=true;
            	    			break;
            	    		}
            	    	}
            	    	if(flag)
            	    		break;
            	    }
            	    if(!present)
            			good.insert(j);
            	}
            	else break;	   
		}
    for(set<int>::iterator it=good.begin();it!=good.end();it++)
    	cout<<*it<<" ";
    cout<<endl;
	}
}