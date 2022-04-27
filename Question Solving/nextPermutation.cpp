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
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll> v(n,0);
		for(int i=0;i<n;i++)
			cin>>v[i];
		//next_permutation(v.begin(),v.end());
		ll i=v.size()-2;
		while(i>=0 && v[i]>=v[i+1])
		{
			i--;
		}

		if(i>=0){
			ll j=v.size()-1;
			while(j>=0 && v[j]<=v[i])
				j--;
			swap(v[i],v[j]);
		}

		reverse(v.begin()+i+1,v.end());

		for(int k=0;k<n;k++)
			cout<<v[k];
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


