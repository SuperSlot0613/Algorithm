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

int soive(vector<int> v ,int target){

	int l=0,r=v.size()-1;
	int min=0;
	while(l<=r){
		int mid=(l+r)/2;

		if(v[mid]==target){
			return v[mid];
		}
		if(v[mid]<target)
		{
			l=mid+1;
		}
		else{
			min=v[mid];
			r=mid-1;
		}
	}
	return min;
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int target;
	cin>>target;

	cout<<soive(v,target);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


