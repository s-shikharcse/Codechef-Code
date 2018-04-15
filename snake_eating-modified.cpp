#include<iostream>
#include<algorithm>

using namespace std;
int bs(int *arr,int low,int high,int val){
    if(val < arr[low]) return low;
    else if (val > arr[high]) return -1;
    int mid = (low+high)/2;
    if(arr[mid] == val) return mid;
    else if(arr[mid] < val){ 
        if(mid+1 <= high && val <= arr[mid+1])
                return (mid+1);
         else return bs(arr,mid+1,high,val);
        }
    else{
        if(mid-1 >= low && val > arr[mid-1]) return mid;
        else return bs(arr,low,mid-1,val);
    }
}
int main()
{
    int t,n,q,query;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        int *a = new int[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        sort(a,a+n);
        
        for(int i=0;i<q;i++)
        {
            int ans = 0;   //for stroing the final answer
            int pos = -1;  // for keeping the track till where the value of query is more than the elements of a
            cin>>query;
/*            for(int j=0;j<n;j++)
            {
                if(query>a[j])  
                    continue;
                else
                {
                    pos=j; //storing the value where a[j]>=query; because these snakes are already grater than 
                           //the threshold value of the query
                    break;
                }
            }*/
            pos = bs(a,0,n-1,query);
            if(pos!=-1)   //if there is "atleast" a value >= query
                ans = n-pos;
            else   //if query>a[max] t
              pos = n;        

            for(int k=pos-1;k>=0;k--)
            {
                if(query-a[k]<=k) //checking whether the snake at position k after eating all the snakes
                {                 //less than its length, can make value atleast = query
                                  //e.g. a=5,8,9,10,21(sorted)    query=10;
                                  //we will have pos=3 therefore initial k=2 and a[k]==9
                                  //in if condition i am checking whether "10-9"means  how many snakes the snake 
                                  //with length=9  should eat to make value equal to query(=10)                  
                    ans++;
                    k=k-(query-a[k]); //removing all the snakes which have been eaten because eating a snake 
                                      //increases value only by 1
                }
            }
            cout<<ans<<endl;
        }
    }
}