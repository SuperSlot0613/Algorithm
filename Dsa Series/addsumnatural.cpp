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

	ll n;
	cin>>n;
	ll even=0;
	ll odd=0;
	if(n==1)
		cout<<odd<<" "<<even<<endl;
	else
	{
		ll i=1,j=0;
		while(j<n)
		{
			if(i%2==0){
				even=even+i;
				j++;
			}
			i++;
		}
		i=1,j=0;
		while(j<n)
		{
			if(i%2!=0){
				odd=odd+i;
				j++;
			}
			i++;
		}
		cout<<odd<<" "<<even<<endl;
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


