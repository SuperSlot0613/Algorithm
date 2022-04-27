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

int soive(vector<int> v){

	vector<int> ans;
	ans.push_back(v[0]);
	int val=v[0];
	for(int i=1;i<v.size();i++){
		cout<<count(ans.begin(), ans.end(), v[val]);
		if(count(ans.begin(), ans.end(), v[val])){
			ans.push_back(v[val]);
			val=v[val];
		}
		else
			break;
	}

	return ans.size();
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	cout<<soive(v);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


