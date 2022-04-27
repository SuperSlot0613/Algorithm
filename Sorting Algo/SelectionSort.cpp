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

int findMinIdx(vector<int> &v,int i){
	int min_idx=i;

	while(i<v.size()){

		if(v[i]<v[min_idx]){
			min_idx=i;
		}
		i++;
	}
	return min_idx;
}

void selectionSort(vector<int> &v){

	for(int i=0;i<v.size();i++){
		int min_idx=findMinIdx(v,i);

		if(i!=min_idx){
			swap(v[i],v[min_idx]);
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
	vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>v[i];
	}

	selectionSort(v);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


