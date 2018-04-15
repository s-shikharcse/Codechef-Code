//using Fermat
#include<iostream>
#include<stdlib.h>
using namespace std;

int modulo(int a, int b, int c){
	long long x=1, y=a;
	while(b>0){
		if(b%2==1){
			x=(x*y)%c;
		}
		y=(y*y)%c;
		b /= 2;
	}
	return x%c;
}

bool isPrime(int p){
	if(p==1) return false;

	for(int i=0;i<5;i++){
		long long a = rand()%(p-1) + 1;
		if(modulo(a,p-1,p)!=1) return false;
	}
	return true;
}

int main(){
	int n,q,l,r,x,y;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
    
    cin>>q;
    for(int k=0;k<q;k++){
    	cin>>l>>r>>x>>y;
    	int result = 0;
    	for(int i=x;i<=y;i++){
    		if(isPrime(i)){
    			for(int j=l-1;j<=r-1;j++){
    				int number = a[j];
    				int exponent = 0;
    				while(number % i ==0){
    					exponent = exponent + 1;
    					number = number/i;
    				}
    				result = result + exponent;
    			}
    		}
    	}
cout<<result<<endl;
    } 
}