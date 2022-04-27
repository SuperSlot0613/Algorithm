#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define ll1 long long
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

ll Moduler(ll x,ll n,ll m){
	ll y;
	if(n==0)
		return 1;
	else if(n%2==0){
	    y=Moduler(x,n/2,m);
		y=(y*y)%m;
	}
	else{
		y=((x%m)*Moduler(x,n-1,m))%m;
	}
	return y;
	
}

int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll merr=1e9+7;

		ll count=Moduler(2,n-1,merr);
	
		cout<<count%merr<<endl;
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


