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
	std::vector<vector<int>> v;
	for(int i=0;i<n;i++)
		for(int j=0;j<2;j++)
			cin>>v[i][j];

	vector<vector<int>> ans;
	sort(v.begin(),v.end());
	vector<int> temp=v[0];

	for(auto i:v)
	{
		if(i[0]<=temp[1])
			temp[1]=max(i[1],temp[1]);
		else
		{
			ans.push_back(temp);
			temp=i;
		}
	}
	ans.push_back(temp);
	cout<<ans[0][0];



	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


