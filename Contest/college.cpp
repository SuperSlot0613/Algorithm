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
	long t;
	cin>>t;
	while(t--)
	{
		long n,m,flag=1,count=0,temp;
		cin>>n>>m;
		map<long,long> has;
		std::vector<long> v;
		long i,j;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			has[temp]++;
			v.push_back(temp);
		}
		for(j=0;j<m;j++)
		{
			cin>>temp;
			has[temp]=0;
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		for(auto l:v)
		{
			if(has[l]!=flag)
			{
				if(flag==1)
					flag=0;
				else
					flag=1;
				count++;
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


