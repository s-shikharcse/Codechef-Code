#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
	
int main(){
	int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		int *a = new int[n];
		int *neg = new int[n];
		int neg_count = 0, pos_count = 0, neg_index=0;
		long long neg_sum = 0, pos_sum = 0, sum=0, max_happiness = 0;;		
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<=0){
				neg_count++;
				neg_sum += a[i];
				if(a[i]!=0)
				neg[neg_index++] = a[i];
			}
			if(a[i]>=0){
				pos_count++;
				pos_sum += a[i];
			}
		}
		//cout<<"neg_sum = "<<neg_sum<<endl;
		//cout<<"pos_sum = "<<pos_sum<<endl;
		//cout<<"pos_count = "<<pos_count<<endl; 
		if(neg_count==n){
			cout<<neg_sum<<endl;
		}
		else if(pos_count==n){
			cout<<pos_sum*pos_count<<endl;
		}
		else{
			int m = 0;
			sort(neg,neg+(neg_index),greater<int>());
			//for(int i=0;i<neg_index;i++) cout<<neg[i]<<" ";
			//	cout<<endl;
			sum = neg_sum + (pos_count*pos_sum);
			//max_happiness = sum;
			//sum = (((pos_sum+neg[m])*(pos_count+m+1)) + (neg_sum-a[m]));
			while(sum>max_happiness){
				max_happiness = sum;
				sum = (((pos_sum+neg[m])*(pos_count+m+1)) + (neg_sum-neg[m]));
				neg_sum -= neg[m];
				pos_sum += neg[m];
				//cout<<"max_happiness = "<<max_happiness<<endl;
				//cout<<"sum = "<<sum<<endl;
				//cout<<"neg_sum = "<<neg_sum<<endl;
				m++;
			}
			cout<<max_happiness<<endl;
		}
	}
}