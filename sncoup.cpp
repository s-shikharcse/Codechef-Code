#include<iostream>
using namespace std;

int main(){
	int t,n;
	cin>>t;

	while(t--){
    cin>>n;
    char a[2][n];
    
    for(int i=0;i<2;i++){
    	for(int j=0;j<n;j++){
    		cin>>a[i][j];
    	}
    }

    int fences = 0;
    char prev1='.', prev2='.', row1=false, row2=false;
    
    for(int i=0;i<n;i++) {

    	if(a[0][i]=='*'){
    		row1=true;
    	}
    	if(a[1][i]=='*'){
    		row2=true;
    	}
    	if((row2==row1)and(row1==true)){
    		fences++;
    		break;
    	}
    }
    
    for(int i=0;i<n;i++){
    	    if(((a[0][i]=='*')and(a[1][i]=='*'))and((prev1=='*')or(prev2=='*'))) {
    	    	fences++;
    	    	if(prev1=='*')
    	    		prev2='*';
    	    	else if(prev2=='*')
    	    		prev1='*';
    	    	continue;
    	    }
    		if((a[0][i]=='*') and (prev1!='*')){
    			prev1='*';
    		}
    		else if((a[0][i]=='*') and (prev1=='*')) {
    			fences++;
    			prev2='.';
    		}
            
    		if((a[1][i]=='*') and (prev2!='*')){
    			prev2='*';
    		}
    		else if((a[1][i]=='*') and (prev2=='*')){
                    fences++;
                    prev1='.';	
    		}
    	}
cout<<fences<<endl;
	}  	
}