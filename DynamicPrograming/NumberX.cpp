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

ll minStepTd(int n,ll *dp){
	if(n==2 or n==3) return 1;
	if(n==1) return 0;
	if(n<1) return inf;

	if(dp[n]!=0) return dp[n];

	ll div_3=inf,div_2=inf,min_1=inf;
	if(n%3==0){
		div_3=minStepTd(n/3,dp);
	}
	if(n%2==0){
		div_2=minStepTd(n/2,dp);
	}
	min_1=minStepTd(n-1,dp);
	return dp[n]=1+min({div_3,div_2,min_1});

}

ll minStepBU(int n){
	ll *dp=new ll[n+1]();
	dp[0]=inf;
	dp[1]=0;
	dp[2]=dp[3]=1;
	for(int i=4;i<=n;i++)
	{
		ll div_3=inf,div_2=inf,min_1=inf;
		if(i%3==0){
			div_3=dp[i/3];
		}
		if(i%2==0){
			div_2=dp[i/2];
		}
		min_1=dp[i-1];
		dp[i]=1+min({div_3,div_2,min_1});
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
	ll *dp=new ll[n+1]();
	cout<<minStepTd(n,dp)<<endl;
	cout<<minStepBU(n)<<endl;

	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


