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
bool sortcol(const vector<int> &v1,const vector<int> &v2){
	return v1[1]>v2[1];
}

struct Job{
	char id;
	int deadline;
	int income;
}job;

int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
		vector<vector<int>> v(n,vector<int>(2));
		for(int i=0;i<n;i++)
		{
			cin>>v[i][0]>>v[i][1];
		}

		sort(v.begin(),v.end(),sortcol);

		bool result[d];
		char ans[d];
		int profit=0;

		for(int i=0;i<n;i++)
		{
			int j=min(d-1,v[i][0]-1);
			for(;j>=0;j--)
			{
				if(result[j]==false){
					result[j]=true;
					profit+=v[i][1];
					break;
				}
			}
		}
		cout<<profit<<endl;



	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}




