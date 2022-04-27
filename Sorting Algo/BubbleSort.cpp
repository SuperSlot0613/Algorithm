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

void BubbleSort(vector<int> &v){

	for(int i=0;i<v.size()-1;i++){
		bool is_sorted=false;

		for(int j=0;j<v.size()-i-1;j++){
			if(v[j]>v[j+1]){
				swap(v[j],v[j+1]);
				is_sorted=true;
			}
		}
		if(not is_sorted){
			break;
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

	BubbleSort(v);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


