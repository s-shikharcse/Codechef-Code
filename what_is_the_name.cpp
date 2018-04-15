#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	char name[35];
	while(t--){
		int count_blank=0;
		int index_of_spaces[2];
		cin.getline(name,35);
		for(int i=0;i<strlen(name);i++){
			if(name[i]==' '){
				index_of_spaces[count_blank] = i;
				count_blank++;
			}	
		}
		char temp;
		switch(count_blank){

			case 0: temp = name[0];
					putchar(toupper(temp));
					for(int i=1;i<strlen(name);i++){
						temp = name[i];
						putchar(tolower(temp));
					}
				break;
			case 1:temp = name[0];
				   putchar(toupper(temp));
				   putchar(". ");
				   temp = name[index_of_spaces[0]+1]
				   putchar(toupper(temp));
					for(int i=index_of_spaces[0]+2;i<strlen(name);i++){
						temp = name[i];
						putchar(tolower(temp));
					}
				break;
			case 2:temp = name[0];
			 	   putchar(toupper(temp));
			 	   putchar(". ");
				   temp = name[index_of_spaces[0]+1]
				   putchar(toupper(temp));
				   putchar(". ");
				   for(int i=index_of_spaces[1]+1;i<strlen(name);i++){
				   		temp = name[i];
				   		putchar(tolower(temp)); 
				   }
				break;	
		}
	}
}			