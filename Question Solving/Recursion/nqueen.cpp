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
int count=0;

void Display(bool grid[][],int n) {

	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(grid[i][j])
					cout<<"Q";
				else
					cout<<". ";
			}
			cout<<endl;
		}
}

bool isSafe(bool grid[][],int row,int col,int n){

	for(int i=row-1;i>=0;i--){
		if(grid[i][col]==true){
				return false;
			}
	}
	for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--){
		if(grid[i][j]==true)
			return false;
	}
	for(int i=row+1,j=col+1;i>=0&& j<n;i--,j++){
		if(grid[i][j]==true){
			return false;
		}

	}
}

void countQueen(bool grid[][],int curr_row,int n){
	if(curr_row==n){
		count++;
		Display(grid,n);
		cout<<endl;
		return;
	}

	for(int i=0;i<n;i++){
		if(isSafe(grid,curr_row,i,n)){
			grid[curr_row][i]=true;
			countQueen(grid,curr_row+1,n);
			grid[curr_row][i]=false;
			
		}
	}
}




int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n;
	cin>>n;
	bool grid[n][n]={{false}};

	countQueen(grid,0,n);
	cout<<count<<endl;



	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


