#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<boost/algorithm/string.hpp>
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

	std::string s;
	std::cin>>s;
	std::string s1="pawri",s2="party",s3="";
	int i=0;
	if(s.size()<s2.size())
		cout<<s<<endl;
	else if(s.size()==s2.size())
	{
		if(s==s2)
		{
			std::cout<<s1<<endl;
		}
		else
		{
			std::cout<<s<<endl;
		}
	}
	else
	{
		boost::replace_all(s,s2,s1);
		std::cout<<s<<endl;
	}

	
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


