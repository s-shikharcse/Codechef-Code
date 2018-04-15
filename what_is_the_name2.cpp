#include<bits/stdc++.h>
using namespace std;

int main(){
	//ios_base :: sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);
	int t;
	cin>>t;
	cin.ignore('\n');
    string name;
	while(t--){
		int count_blank=0;
		int index_of_spaces[2];
		getline(cin,name);
		for(int i=0;i<name.length();i++){
			if(name[i]==' '){
				index_of_spaces[count_blank] = i;
				count_blank++;
			}	
		}

		switch(count_blank){
			case 0:cout<< (char)((int)name[0]+65);
					for(int i=1;i<name.length();i++)
						cout<<name[i];
				break;
			case 1:cout<<(char)((int)name[0]+65)<<". ";
				   cout<<(char)((int)name[index_of_spaces[0]+1]+65);
					for(int i=index_of_spaces[0]+2;i<name.length();i++)
						cout<<name[i];
				break;
			case 2:cout<<(char)((int)name[0]+65)<<". ";
				   cout<<(char)((int)name[index_of_spaces[0]+1]+65)<<". ";
				   for(int i=index_of_spaces[1]+1;i<name.length();i++)
				   		cout<<name[i]; 
				break;	
		}
	cout<<"\n";	
	}
}			