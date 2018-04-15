//using Rabin-Miller
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

long long mulmod(long long a, long long b, long long c){
	long long x=0, y=a%c;
	while(b>0){
		if(b%2==1){
			x=(x+y)%c;
		}
		y=(y*2)%c;
        b=b/2;
	}
	return x%c;
}

bool isPrime(long long p){
	if(p<2) return false;
	if(p!=2 && p%2==0) return false;
	long long s=p-1;
	while(s%2==0)
		s=s/2;
	for(int i=0;i<10;i++){
		long long a = rand()%(p-1)+1, temp=s;
		long long mod = modulo(a,temp,p);
		while(temp!=p-1 && mod!=1 && mod!=p-1 ){
			mod = mulmod(mod,mod,p);
			temp *= 2;
		}
		if(mod!=p-1 && temp%2==0) return false;
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