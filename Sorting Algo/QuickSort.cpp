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

int Partition(vector<int> &v,int lo,int hi ){

	int m=lo;
	int n=rand();
	int pivot=lo+(n%(hi-lo+1));
	swap(v[pivot],v[hi]);

	for(int i=lo;i<hi;i++){
		if(v[i]<v[hi]){
			swap(v[i],v[m]);
			m++;
		}
	}
	swap(v[hi],v[m]);

	return m;
}

void quickSort(vector<int> &v,int lo,int hi){

	if(lo<hi){
		int pivot_index=Partition(v,lo,hi);
		quickSort(v,lo,pivot_index-1);
		quickSort(v,pivot_index+1,hi);
	}
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n;
	cin>>n;
	vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>v[i];
	}

	quickSort(v,0,n-1);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


