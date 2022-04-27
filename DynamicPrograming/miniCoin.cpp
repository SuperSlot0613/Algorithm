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

ll minicoinTD(ll *coin,ll n,ll sum,vector<ll> &dp){
	if(sum<0) return inf;
	if(sum==0) return 0;
	if(dp[sum]!=-1) return dp[sum];
	ll result=inf;
	for(int i=0;i<n;i++){
		ll resultmini=minicoinTD(coin,n,sum-coin[i],dp);
		if(resultmini==inf)
			continue;
		result=min(result,1+resultmini);
	}
	return dp[sum]=result;
}

ll minicoinBU(ll *coin,ll sum,ll n){
	vector<int> dp(sum+1,inf);
	dp[0]=0;
	for(int i=1;i<=sum;i++)
		for(int j=0;j<n;j++)
		{
			if(coin[j]>i) continue;
			dp[i]=min(dp[i],1+dp[i-coin[j]]);

		}
		if(dp[sum]==inf)
			return -1;
		return dp[sum];
}



int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	ll n,sum;
	cin>>n>>sum;
	vector<ll> dp(sum+1,inf);
	ll *coin=new ll[n];
	for(int i=0;i<n;i++) cin>>coin[i];
	cout<<minicoinTD(coin,n,sum,dp)<<endl;
    cout<<minicoinBU(coin,sum,n);
	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


