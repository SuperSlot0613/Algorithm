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

double soive(vector<int> v,vector<int> v1){

	vector<int> nums;
	for(int i=0;i<v.size();i++){
		nums.push_back(v[i]);
	}
	for(int i=0;i<v1.size();i++){
		nums.push_back(v1[i]);
	}

	sort(nums.begin(),nums.end());

	int l=0,r=nums.size()-1;
	double median;

	while(l<=r){
		int mid1=l+(r-l)/3;
		int mid2=r-(r-l)/3;

		if(nums[mid1+1]==nums[mid2]){
			median=double(nums[mid1]+nums[mid2])/2;
			break;
		}
		else{
			l=mid1+1;
			r=mid2-1;
		}
	}
	return median;
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n,m;
	cin>>n>>m;
	vector<int> v(n);
	vector<int> v1(m);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	for(int i=0;i<m;i++){
		cin>>v1[i];
	}

	cout<<soive(v,v1);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


