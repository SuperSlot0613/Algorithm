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
ll calculatenumber(ll n){
	ll num_factors=1;
	for(ll i=2;i*i<=n;i++)
	{

	}
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll b=n,count=0;

		while(b>=2){
			ll val =m%b;
			ll val2=m-val;
			for(ll i=1;i<sqrt(val2);i++)
			{
				if(val2%i==0)
				{
					if(i<b){
						count++;
					}
					if(i!=float(sqrt(val2))){
					  if(val2/i<b)
						 count++;
				    }
				}
			}
			b--;
		}
		cout<<count<<endl;
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


