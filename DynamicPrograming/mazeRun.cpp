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
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n,m;
	cin>>n>>m;
	vector<vector<char>> grid(n+1,vector<char>(m+1));
	for(int i=1;i<=n;i++)
	{
		string str;
		cin>>str;
		for(int j=1;j<=m;j++)
		{
			grid[i][j]=str[j-1];
		}
	}
	vector<vector<int>> dp(n+1,vector<int>(m+1,0));
	dp[n][m]=1;
	for(int i=n;i>=1;i--)
	{
		for(int j=m;j>=1;j--)
		{
			if(i==n and j==m) continue;
			if(grid[i][j]=='#')
			{
				dp[i][j]=0;
				continue;
			}
			dp[i][j]=((i==n)?0:dp[i+1][j])+((j==m)?0:dp[i][j+1]);
		}
	}
	cout<<dp[1][1];
	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


