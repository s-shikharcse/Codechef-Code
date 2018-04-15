#include<iostream>
typedef unsigned long long int uint64t;
using namespace std;

struct uint192_t{
	uint64t bits[158];
};

int main(){
	int t,n,K,len;
	uint64t element, zero = 0;
	cin>>t;
	while(t--){
		cin>>n>>K;
		uint192_t set[n];
        uint64t count = 0;
		for(int i=0;i<n;i++){
			//memset(set[i].bits, 0, sizeof(set[i]));
			for(int j=0;j<158;j++){
				set[i].bits[j] = set[i].bits[j] & zero;
			}
			cin>>len;
			for(int j=0;j<len;j++){
				cin>>element;
				set[i].bits[element/64] = set[i].bits[element/64]|(1<<(element%64)); 	
			}
		}

		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				uint192_t UNION;
				uint64t sub_count = 0;
				for(int k=0;k<158;k++){
				UNION.bits[k] = UNION.bits[k] & zero;
			}
			for(int k=0;k<158;k++){
				UNION.bits[k] = set[i].bits[k] | set[j].bits[k];
				sub_count += __builtin_popcount(UNION.bits[k]);
			}
			if(sub_count==K)
				count++;
		}
	}
	cout<<count<<endl;
}
}