#include<iostream>
#include<set>
using namespace std;

int main(){
	int t,n,q,a,b,c,d;
	cin>>t;
	while(t--){
		cin>>n>>q;
		int *arr = new int[n];
		for(int i=0;i<n;i++) cin>>arr[i];

		for(int i=0;i<q;i++){
			int count = 0;
		    bool flag = false;
			cin>>a>>b;
			cin>>c>>d;
			set<int>s1,s2;
			for(int j=a-1;j<=b-1;j++)
				s1.insert(arr[j]);
		    for(int k=c-1;k<=d-1;k++)
				s2.insert(arr[k]);
			set<int>::iterator it1=s1.begin();
			set<int>::iterator it2=s2.begin();
			for(;it1!=s1.end()&&it2!=s2.end();it1++,it2++){
				if(*it1!=*it2){
					count++;
					//cout<<"it1 = "<<*it1<<endl;
					//cout<<"it2 = "<<*it2<<endl;
					//cout<<count<<endl;	
				} 
				if(count>1) {
                    cout<<"NO"<<endl;
					flag = true; 
					break;
			}
		}
		if(!flag) cout<<"YES"<<endl;	
	}
}
}