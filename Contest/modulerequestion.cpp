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
		ll n,m;
		cin>>n>>m;
		ll i=2,count=n-1;
		if(n==1)
			cout<<0<<endl;
		else if(n==2)
			cout<<1<<endl;
		else{
		    while(i<=n)
			{
				ll j=i+1;
				ll val=m%j;
				if (m%i==0 && m%j==0){
					count=count+(n-i);
				}
				else if(m%i==0 && val%i==0){
					count++;
				}
				else
				{
					while(j<=n)
					{
						if((m%i)%j==(m%j)%i){
							count++;
						}
						j++;
					}
				}
				i++;
			}
	    }
		cout<<count<<endl;
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}

