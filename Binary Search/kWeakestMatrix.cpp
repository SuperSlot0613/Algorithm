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

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {

	if(v1[1]==v2[1]){
		return v1[0]<v2[0];
	}
   return v1[1] < v2[1];
}

void soive(vector<vector<int>> v,int k){

	vector<vector<int>> v1(v.size(),vector<int>(2));

	int row=v.size()-1;
	int i=0;

	while(row--){

		int l=0,r=v[i].size()-1;
		while(l<=r){
			int mid=(l+r)/2;

			if(v[i][mid]==0){
				v1[i][i+1]=mid+1;
				r=mid-1;
			}
			else if(v[i][mid]!=0){
				l=mid+1;
			}
			else
				r=mid-1;

		}
		i++;

	}

	sort(v1.begin(),v1.end(),sortcol);

	for(int j=0;j<k;j++){
		cout<<v1[0][j]<<endl;
	}


	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();

	int m,n;
	cin>>m>>n;

	vector<vector<int>> v(m,vector<int>(n));

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	int k;
	cin>>k;

	soive(v,k);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


