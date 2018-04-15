//for help https://www.codechef.com/viewsolution/13794337
#include<iostream>
#define  mod 1000000007 
typedef long long int lli;
using namespace std;

lli a[100000], seg_tree[400000]={0}, lazys[400000]={0}, lazym[400000]={0};

void build(lli s, lli e, lli node_num){
	if(s==e) seg_tree[s]=a[s];
	else{
		lli m = (s+e)/2;
		build(s,m,node_num*2);
		build(m+1,e,node_num*2+1);
		seg_tree[node_num]=seg_tree[node_num*2]+seg_tree[node_num*2+1];
	}
}
void range_update1(lli l,lli r,lli val,lli s,lli e,lli node_num){
	if(lazys[node_num]!=0){
			seg_tree[node_num]=(seg_tree[node_num]+(e-s+1)*lazys[node_num])%mod;
			if(e!=s){
				lazys[node_num*2] = (lazys[node_num*2]+lazys[node_num])%mod;
				lazys[node_num*2+1] = (lazys[node_num*2+1]+lazys[node_num])%mod;
			}
			lazys[node_num]=0;   
	}
	if(s>r or e<l) return ;
	else if(s>=l and e<=r){
		seg_tree[node_num] = (seg_tree[node_num]+(e-s+1)*val)%mod;
			if(e!=s){
		lazys[node_num*2] = (lazys[node_num*2]+val)%mod;
		lazys[node_num*2+1] = (lazys[node_num*2+1]+val)%mod;
	}
	}
	else{
		lli m = (s+e)/2;
		range_update1(l,r,val,s,m,node_num);
		range_update1(l,r,val,m+1,e,node_num);
		seg_tree[node_num]=(seg_tree[node_num*2]+seg_tree[node_num*2+1])%mod;
	}
}

void range_update2(lli l,lli r,lli val,lli s,lli e,lli node_num){
	if(lazym[node_num]!=0){
			seg_tree[node_num]=(seg_tree[node_num]*(e-s+1)*lazym[node_num])%mod;
			if(e!=s){
				lazym[node_num*2] = (lazym[node_num*2]*lazym[node_num])%mod;
				lazym[node_num*2+1] = (lazym[node_num*2+1]*lazym[node_num])%mod;
			}
			lazym[node_num]=0;   
	}
	if(s>r or e<l) return ;
	else if(s>=l and e<=r){
		seg_tree[node_num] = (seg_tree[node_num]*(e-s+1)*val)%mod;
			if(e!=s){
		lazym[node_num*2] = (lazym[node_num*2]*val)%mod;
		lazym[node_num*2+1] = (lazym[node_num*2+1]*val)%mod;
	}
	}
	else{
		lli m = (s+e)/2;
		range_update2(l,r,val,s,m,node_num);
		range_update2(l,r,val,m+1,e,node_num);
		seg_tree[node_num]=(seg_tree[node_num*2]*seg_tree[node_num*2+1])%mod;
	}
}

void range_update3(lli l,lli r,lli val,lli s,lli e,lli node_num){
	if(lazy[node_num]!=0){
			seg_tree[node_num]=(e-s+1)*lazy[node_num];
			if(e!=s){
				lazy[node_num*2] = lazy[node_num];
				lazy[node_num*2+1] = lazy[node_num];
			}
			lazy[node_num]=0;   
	}
	if(s>r or e<l) return ;
	else if(s>=l and e<=r){
		seg_tree[node_num] = (e-s+1)*val;
			if(e!=s){
		lazy[node_num*2] = val;
		lazy[node_num*2+1] = val;
	}
	}
	else{
		lli m = (s+e)/2;
		range_update3(l,r,val,s,m,node_num);
		range_update3(l,r,val,m+1,e,node_num);
		seg_tree[node_num]=seg_tree[node_num*2]+seg_tree[node_num*2+1];
	}
}

lli query(lli l, lli r, lli s, lli e,lli node_num){
	/*if(lazy[node_num]!=0){
		seg_tree[node_num] = (e-s+1)*lazy[node_num];
		if(e!=s){
			lazy[node_num*2] = lazy[node_num];
			lazy[node_num*2+1] = lazy[node_num];
		} 
		lazy[node_num]=0;
	}*/
	if(s>r or e<l) return 0;
	else if(s>=l and e<=r) return seg_tree[node_num];
	else{
		lli m = (s+e)/2;
		lli p1= query(l,r,s,m,node_num*2);
		lli p2 = query(l,r,m+1,e,node_num*2+1);
		return (p1+p2)%mod;
	}
}

int main(){
	lli n,q,qry,l,r,v;
	cin>>n>>q;
	for(lli i=0;i<n;i++) cin>>a[i];
	build(0,n-1,1);
    for(lli i=0;i<q;i++) {
    	cin>>qry>>l>>r;
    	switch(qry){
    		case 1:cin>>v;
    		 	   range_update1(l-1,r-1,v,0,n-1,1); 	
    			   break;
    		case 2:cin>>v;
    			   range_update2(l-1,r-1,v,0,n-1,1);	
    		 	   break;
    		case 3: cin>>v;
    			   range_update3(l-1,r-1,v,0,n-1,1);
    			   break;
    		case 4:
    		        cout<<query(l-1,r-1,0,n-1,1)<<endl;   	    	 	    		   	
    	}

    }

}