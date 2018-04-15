#include<iostream>
#include<math.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,q,l,r,x,y;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++) cin>>a[i];
    
    int limit = 1000001;
   /* bool isPrime[1000001];
    for(int i=0;i<=n;i++)
    	isPrime[i] = true;
    isPrime[0] = false;
    isPrime[1] = false; 
    for(int i=2;i<=sqrt(n);i++){
    	if(isPrime[i]){
    		for(int j=2*i;j<=n;j+=i)
    			isPrime[j]=false;
    	}
    }*/
	/*const int N = 1000000;
	const int SQR_ROOT_N = (int) (sqrt ((double) N));
	bool isPrime[N + 1];
	
	isPrime[0] = false;  
	isPrime[1] = false;  
	
	for (int i = 2; i <= N; i++)
		 isPrime[i] = true;  
		 
	for (int i = 2; i <= SQR_ROOT_N; i++)
	{
		if (isPrime[i]) 
		{
			for (int j = 2 * i; j <= N; j+=i)
				 isPrime[j] = false;  
		}
	}
   for(int i = 2;i<=100;i++)
    	{
    		if(isPrime[i]) cout<<i<<" ";
    	}
    	cout <<endl;*/
        
    bool sieve[limit];
    for (int i=0; i<limit; i++)
        sieve[i] = false;
    sieve[2] = true;
    sieve[3] = true;
    //sieve[5] = true; 
            
    for (int x = 1; x*x < limit; x++)
    {
        for (int y = 1; y*y < limit; y++)
        {
            
            int n = (4*x*x)+(y*y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] ^= true;
 
            n = (3*x*x)+(y*y);
            if (n <= limit && n % 12 == 7)
                sieve[n] ^= true;
 
            n = (3*x*x)-(y*y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n] ^= true;
        }
    }
 
    for (int r = 5; r*r < limit; r++)
    {
        if (sieve[r])
        {
            for (int i = r*r; i < limit; i += r*r)
                sieve[i] = false;
         }
    }



    cin>>q;
    for(int k=0;k<q;k++){
    	cin>>l>>r>>x>>y;
    	long long result = 0;
    	for(int i=x;i<=y;i++){
    		if(sieve[i]){
    			for(int j=l-1;j<=r-1;j++){
    				int number = a[j];
    				//cout<<"number = "<<number<<endl;
    				int exponent = 0;
    				while(number%i == 0){
    					exponent = exponent + 1;
    					number = number/i;
    				}
    				result = result + exponent;
    			}
    			//cout<<"result = "<<result<<endl;
    		}
    	}

    cout<<result<<endl; 
    } 
}
