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

bool soive(vector<vector<int>> v,int target){

	int rows =0;
    int cols = v[0].size()-1;
    int n=v.size();

    while(rows<n && cols>=0){

    	if(v[rows][cols]==target){
    		return true;
    	}
    	else if (v[rows][cols]>target){
    		cols--;
    	}
    	else
    		rows++;
    }
    return false;
	
}

int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n,m;
	cin>>n>>m;
	vector<vector<int>> v( n , vector<int> (m, 0));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>v[i][j];
		}
	}
	int target;
	cin>>target;

	cout<<soive(v,target);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


