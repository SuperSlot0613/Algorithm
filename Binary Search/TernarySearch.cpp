#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define vi vector<ll>
#define ve vector<int>
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

int soive(vector<int> v,int n,int target){

	int l=0,r=n-1;

	while(l<=r){
		int mid1=l+(r-l)/3;
		int mid2=r-(r-l)/3;

		if(target==v[mid1]) return mid1;
		if (target==v[mid2])
		{
			return mid2;
		}
		if(target<v[mid1])
			r=mid1-1;
		else if(target>v[mid2])
			l=mid2+1;
		else{
			l=mid1+1;
			r=mid2-1;
		}
	}
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n;
	cin>>n;
	vector<int> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int target;
	cin>>target;

	cout<<soive(v,n,target);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


