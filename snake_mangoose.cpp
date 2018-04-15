#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	int t,len;
	string s;
	cin>>t;
		while(t--){
			int count_s=0, count_m=0;
			cin>>s;
			len = s.length();
			for(int i=0;i<len;i++){
				if(s[i]=='m'){
					count_m++;
					if((s[i+1]=='s')&&(i<len-1))
						i++;
				}
				else{
					if(((s[i+1]=='m')&&(s[i+2]!='s'))&&(i<len-2))
						continue;
					else if (((s[i+1]=='m')&&(s[i+2]=='s'))&&(i<len-2))
						count_s++;
					else if((s[i+1]=='m')&&(i<len-1))
						continue;
					else
  						count_s++;
	        	}
     	    }
        if(count_s>count_m)
        cout<<"snakes"<<endl;
        else if(count_s<count_m)
        cout<<"mongoosses"<<endl;
        else
        cout<<"tie"<<endl; 
	    }
}