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
int dp[1000][1000][1000];
int function(string s1,string s2,string s3,int i,int j,int k)
{
	if(i==s1.size() or j==s2.size() or k==s3.size())
	{
		return 0;
	}
	if(dp[i][j][k]!=-1)
		return dp[i][j][k];

	if(s1[i]==s2[j]==s3[k])
	{
		return dp[i][j][k]=1+function(s1,s2,s3,i+1,j+1,k+1);
	}
	else
	{
		return dp[i][j][k]=max(function(s1,s2,s3,i+1,j,k),max(function(s1,s2,s3,i,j+1,k),function(s1,s2,s3,i,j,k+1)));
	}

}

int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int n=s1.size(),m=s2.size(),l=s3.size();
	dp[n][m][l];
	memset(dp,-1,sizeof(dp));
	cout<<function(s1,s2,s3,0,0,0);
	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


