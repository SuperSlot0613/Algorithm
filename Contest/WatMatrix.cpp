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

void solve(){
	long n,m,k;
	cin>>n>>m>>k;
	long count=0;
	long a[n+1][m+1];
	for(long i=0;i<n;i++)
	{
		for(long j=0;j<m;j++)
		{
			if(i==0 or j==0)
				a[i][j]=0;
			else
			{
			  cin>>a[i][j];
		    }
			if(a[i][j]>=k)
				count++;
		}
	}
	long dp[n+1][m+1];
	dp[1][1]=a[0][0];
	for(long i=2;i<n;i++)
		dp[i][0]=a[i][0]+dp[i-1][0];
	for(long j=2;j<m;j++)
		dp[0][j]=a[0][j]+dp[0][j-1];
	for(long i=2;i<n;i++)
	{
		for(long j=2;j<m;j++)
		{
			dp[i][j]=a[i][j]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}
	long max=min(n,m);
	long order=1;
	while(order<=max)
	{
		for(long i=1;i<n;i++)
		{
			for(long j=1;j<m;j++)
			{
				if(i-order>=0&&j-order>=0)
				{
						if((dp[i][j]-dp[i-order][j]-dp[i][j-order]+dp[i-order][j-order])/order*order>=k){
				            count++;
			                }
				}

			}
		}
		order++;
    }   	
	cout<<count<<endl;	
}

int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int t;
	cin>>t;
	while(t-->0)
	{
		solve();
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


