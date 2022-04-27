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
    #endif // ONLINrE_JUDGE
}
std::string toBinary(long int n)
{
	std::string r;
	while(n!=0)
	{
		r=(n%2==0 ?"0":"1")+r;
		n/=2;
	}
	return r;
}
void solve(){
	long int c;
	long int max=0;
	cin>>c;
	string ch=toBinary(c);
	long int len=ch.size();
	for(int i=0;i<(long)pow(2,len);i++)
	{
		for(int j=(long)pow(2,len)-1;j>=0;j--)
		{
			long int temp=i^j;
			if(temp==c)
			{
				if(max<i*j)
					max=i*j;
			}
		}
	}
	cout<<max<<endl;
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	long int t;
	cin>>t;
	while(t-->0)
	{
		solve();
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /CLOCKS_PER_SEC*1000<<" ms";
	#endif
	return 0;
}


