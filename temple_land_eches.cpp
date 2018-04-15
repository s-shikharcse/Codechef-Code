#include <iostream>
#include <vector> 

using namespace std;
int main(){
 int s,n;
 cin>>s;
 int val,i,j,cur;
 while(s--){
    cin>>n;
    vector<int> h(n);
    for(i =0;i < n;++i) cin>>h[i];
    if(n%2 == 0){
        cout<<"no"<<endl;
    }
    else{
     cur = 1;
     for(i = 0,j = n-1;(i <= j) and (h[i] == h[j] and h[i] == cur);++i,--j,cur+=1);
     if(i > j) cout<<"yes"<<endl;
     else cout<<"no"<<endl;
    }
 }
return 0;}