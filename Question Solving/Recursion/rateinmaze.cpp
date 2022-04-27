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
int totalpath=0;

bool isSafe(int i,int j,int n,vector<vector<int>> visited){
	return (i>=0 && j>=0&&i<n&&j<n&&visited[i][j]==0);
	
}

void helper(int i,int j,int n,vector<vector<int>> grid,vector<vector<int>> visited,string ofc){

	if(i==n-1 && j==n-1){
		totalpath+=1;
		cout<<ofc<<endl;
		ofc="";
		return;
	}

	if(!isSafe(i,j,n,visited)){
		return;
	}

	visited[i][j]=1;
	if(i-1>=0 && grid[i][j]==0){
		helper(i-1,j,n,grid,visited,ofc+"U");
	}
	if(i+1<n && grid[i][j]==0){
		helper(i+1,j,n,grid,visited,ofc+"D");
	}
	if(j+1<n && grid[i][j]==0){
		helper(i,j+1,n,grid,visited,ofc+"R");
	}
	if(j-1>=0 &&grid[i][j]==0){
		helper(i,j-1,n,grid,visited,ofc+"L");
	}
	visited[i][j]=0;
	return;

}

int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n;
	cin>>n;
	vector<vector<int>> grid(n);
	vector<vector<int>> visited(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>grid[i][j];
		}
	}
	string ofc="";
	helper(0,0,n,grid,visited,ofc);

	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


