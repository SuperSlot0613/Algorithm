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

ll dp[2005][2005][8];
ll klcs(vi &a1,vi &a2,int i,int j,int k)
{
	if(i==a1.size() or j==a2.size())
		return 0;
	if(dp[i][j][k]!=-1)
		return dp[i][j][k];
	ll ans;
	if(a1[i]==a2[j])
	{
		ans=1+klcs(a1,a2,i+1,j+1,k);
		return dp[i][j][k]=ans;
	}
	else
	{
		ll c1=klcs(a1,a2,i+1,j,k);
		ll c2=klcs(a1,a2,i,j+1,k);
		ll c3=-1;
		if(k>0)
		{
		   c3=1+klcs(a1,a2,i+1,j+1,k-1);
		   return dp[i][j][k]=c3;
		}
		ans=max({c1,c2,c3});
		dp[i][j][k]=ans;
		return ans;
	}
}


int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n,m,k;
	cin>>n>>m>>k;
	vi a1(n);
	vi a2(m);
	for(int i=0;i<n;i++) cin>>a1[i];
	for(int i=0;i<m;i++) cin>>a2[i];
	memset(dp,-1,sizeof(dp));
    cout<<klcs(a1,a2,0,0,k);

	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


