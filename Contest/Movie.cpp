#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
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
	long n,s;
	cin>>n>>s;
	long maxi=0;
	while(n-->0)
	{
       long x,m;
       cin>>x>>m; 

       if(x<=s)
       {
       	 int temp=m;
       	 if(maxi<temp)
       	 	maxi=temp;
       }
	}
	cout<<maxi<<endl;
	
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


