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
	int n;
	cin>>n;
	while(true)
	{
		std::vector<int> arr(n,0);
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr.begin(),arr.end());
		int ans=0;
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n-1;j++)
			{
				ans+=arr.end()-(upper_bound(arr.begin(),arr.end(),arr[i]+arr[j]));
			}
		cout<<ans<<endl;
		cin>>n;
		if(n==0)
			break;
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /CLOCKS_PER_SEC*1000<<" ms";
	#endif
	return 0;
}


