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

ll solve(){
	  long n,m,k;
	  cin>>n>>m>>k;

	  long mat[n+1][m+1];
	  long count=0;
	  for(long i=0;i<=n;i++)
	  {
	  	for(long j=0;j<=m;j++)
	  	{
	  		if(i==0 or j==0)
	  		{
	  			mat[i][j]=0;
	  		}
	  		else
	  		{
              cin>>mat[i][j];
            }
	  	}
	  }
	  
	  for(long i=1;i<=n;i++)
	  {
	  	long po=0;
	  	for(long j=1;j<=m;j++)
	  	{
	  		mat[i][j]+=po;
	  		po=mat[i][j];
	  	}
	  }
	  for(long j=1;j<=m;j++)
	  {
	  	long po=0;
	  	for(long i=1;i<=n;i++)
	  	{
	  		mat[i][j]+=po;
	  		po=mat[i][j];
	  	}
	  }
	  long z=min(n,m);
	  long ans=0;
	  long len=1;
	  while(len<=z)
	  {

	  	for(long i=len;i<=n;i++)
	  	{
	  		for(long j=len;j<=m;j++)
	  		{
	  			if(i-len>=0 && j-len>=0)
	  			{
	  			 if((mat[i][j]+mat[i-len][j-len]-mat[i][j-len]-mat[i-len][j])/(len*len)>=k)
	  			 {
	  				ans++;
	  			 } 
	  		   }
	  		}
	  	}
	  	len++;
	  }
	  cout<<ans<<endl;
	  	


}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	long t;
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


