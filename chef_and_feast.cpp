#include <iostream>
using namespace std;
 
int no_of_elements = 0,start,end;

long long int max_subarray(int b[], int size)
 {
 	long long int max_so_far=0,max_ending_here=0;
    start=0,end=0;
    int s=0,n=0;
 	for(int i=0;i<size;i++)
    {
    	n++;
 		max_ending_here+=b[i];
 		if(max_ending_here<0){
 			max_ending_here=0;
 			n=0;
 			s=i+1;	
 		}
 		else if((max_ending_here*n)>max_so_far){
 			start = s;
 			end = i;
 			max_so_far=max_ending_here*n;
 			no_of_elements = end-start+1;		
 		}
 	}
 	return max_so_far;
 }
	
int main(){
	int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		int *a = new int[n];
		int neg_count = 0;
		long long int neg_sum = 0,sum = 0;		
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=0){
				neg_count++;
				neg_sum += a[i];
			}
		}
		if(neg_count==n){
			cout<<neg_sum<<endl;
		}
		else{
        	sum = max_subarray(a,n);
        	for(int i=0;i<start;i++){
        		sum += a[i];
        	}
        	for(int i=end+1;i<n;i++){
        		sum += a[i];
        	}
        	cout<<sum<<endl;
		}
    }
}