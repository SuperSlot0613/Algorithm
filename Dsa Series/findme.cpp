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

	ll n,k;
	cin>>n>>k;
	vector<ll> v(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}

	bool str=false;
	for(int i=0;i<n;i++)
	{
		if(k==v[i])
			str=true;
	}

	if(str)
		cout<<1<<endl;
	else
		cout<<-1<<endl;

	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}

