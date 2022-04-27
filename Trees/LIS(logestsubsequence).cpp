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

void soive(){
	
}

bool cmp(pair<int,int> x,pair<int,int> y){
	if(x.first==y.first){
		return x.second>y.second;
	}
	return x.first<y.first;
}

void update(vector<int> &tree,vector<int> &list,int s,int e,int tidx,int i,int val){
	if(s==e){
		list[i]=val;
		tree[tidx]=val;
		return;
	}
	int mid=(s+e)/2;
	if(i>mid){
		update(tree,list,mid+1,e,2*tidx+1,i,val);
	}else{
		update(tree,list,s,mid,2*tidx,i,val);
	}

	tree[tidx]=max(tree[2*tidx],tree[2*tidx+1]);
}


int query(vector<int>&tree,int s,int e,int tidx,int left,int right){
	if(s>right or e<left){
		return 0;
	}
	if(s>=left and e<=right){
		return tree[tidx];
	}
	int mid=(s+e)/2;
	int a1=query(tree,s,mid,2*tidx,left,right);
	int a2=query(tree,mid+1,e,2*tidx+1,left,right);
	return max(a1,a2);
}


int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n;
	cin>>n;
	vector<pair<int,int>> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i].first;
		arr[i].second=i;
	}
	sort(arr.begin(),arr.end(),cmp);
	vector<int> tree(4*n,0);
	vector<int> lis(n,0);
	for(int i=0;i<n;i++){
		int ele=arr[i].first;
		int index=arr[i].second;
		int res=query(tree,0,n-1,1,0,index-1);
		update(tree,lis,0,n-1,1,index,res+1);
	}

	cout<<"Hello world"<<endl;
	for(auto it:lis){
		cout<<it<<" ";
	}
	cout<<endl;
	int val=*max_element(lis.begin(),lis.end());
	int count=0;
	for(int i=0;i<lis.size();i++){
		if(val==lis[i]){
			count++;
		}
	}
	cout<<count<<endl;
	cout<<val<<endl;

	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


