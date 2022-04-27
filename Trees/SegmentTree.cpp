#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define mt make_tuple
#define eb emplace_back
#define pob pop_back
#define prio priority_queue
#define inf 1e9
#define mod 1000000007


void int_code()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}


void BuildFun(int *arr,int *segtree,int tidx,int s,int e){
	if(s==e){
		segtree[tidx]=arr[s];
		return;
	}
	int mid=(s+e)/2;
	BuildFun(arr,segtree,2*tidx,s,mid);
	BuildFun(arr,segtree,2*tidx+1,mid+1,e);

	segtree[tidx]=segtree[2*tidx]+segtree[2*tidx+1];
}

void update(int *arr,int *segtree,int s,int e,int tidx,int idx,int val){
	if(s==e){
		arr[idx]=val;
		segtree[tidx]=val;
		return;
	}
	int mid=(s+e)/2;
	if(idx>mid){
		update(arr,segtree,mid+1,e,2*tidx+1,idx,val);
	}else{
		update(arr,segtree,s,mid,2*tidx,idx,val);
	}

	segtree[tidx]=segtree[2*tidx]+segtree[2*tidx+1];
}

int query(int *segtree,int s,int e,int tidx,int left,int right){
	if(s>right or e<left){
		return 0;
	}
	if(s>=left and e<=right){
		return segtree[tidx];
	}
	int mid=(s+e)/2;
	int a1=query(segtree,s,mid,2*tidx,left,right);
	int a2=query(segtree,mid+1,e,2*tidx+1,left,right);
	return a1+a2;
}




int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n;
	cin>>n;
	int *arr=new int[n];
	int *segtree=new int[4*n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	BuildFun(arr,segtree,1,0,n-1);
	int q;
	cin>>q;
	while(q--){
		int type;
		cin>>type;
		if(type==1){
			int l,r;
			cin>>l>>r;
			cout<<query(segtree,0,n-1,1,l,r)<<endl;
		}else{
			int i,v;
			cin>>i>>v;
			update(arr,segtree,0,n-1,1,i,v);
		}

	}



	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


