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
	long n,k;
	cin>>n>>k;
	long s,d;
	s=(n+k-1)/k;
	if(n%k==0)
		d=k;
	else
		d=n%k;
	cout<<s+" "+d<<endl;
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	long t;
	cin>>t;
	while(t--)
	{
		solve();
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


