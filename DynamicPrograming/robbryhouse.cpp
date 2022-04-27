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


int robhouseTd(vector<int> &dp,vector<int> &arr,int i)
{
	if(i==0) return dp[0]=arr[0];
	if(i==1)
	{
		return dp[1]=max(arr[0],arr[1]);
	}
	if(dp[i]!=-1)
		return dp[i];
	return dp[i]=max(robhouseTd(dp,arr,i-1),robhouseTd(dp,arr,i-2)+arr[i]);
}

int robhouseBu(int n,vector<int> &arr){
	vector<int> dp(n,0);
	dp[0]=arr[0];
	dp[1]=max(arr[0],arr[1]);
	for(int i=2;i<n;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
	}
	return dp[n-1];
}



int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n;
	cin>>n;
	vector<int> dp(n,-1);
	vector<int> arr(n,0);
	for(int j=0;j<n;j++){
		 cin>>arr[j];
	}
	cout<<robhouseTd(dp,arr,n-1)<<endl;
	cout<<robhouseBu(n,arr)<<endl;

	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


