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

int fibo(int n){
	if(n==0 or n==1) return n;

	return (fibo(n-1)+fibo(n-2));
} 

//dp top down aproch
int fiboTD(int n,vector<int> &dp){
	if(n==0 or n==1) return n;

	if(dp[n]!=-1)
		return dp[n];

	dp[n]=fibo(n-1)+fibo(n-2);
	return dp[n];
}

//Dp Bottom up
int fiboBt(int n){
	std::vector<int> dp(n+1,-1);
	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];

}


int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();

	int n;
	cin>>n;
	vector<int> dp(n+1,-1);
	cout<<fibo(n)<<endl;
	cout<<fiboTD(n,dp)<<endl;
	cout<<fiboBt(n)<<endl;


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


