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

void soive(int i,int j,int n,int m,string osf){

	if(i==n-1 && j==m-1){
		totalpath +=1;
		cout<<osf<<endl;
	}
	if(i>=n or j>=m){
		return;
	}

	soive(i,j+1,n,m,osf+"R->");
	soive(i+1,j,n,m,osf+"D->");
	//soive(i+1,j+1,n,m,osf+"DI->");
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n,m;
	cin>>n>>m;
	string osf="";
	soive(0,0,n,m,osf);
	cout<<totalpath;


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


