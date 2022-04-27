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

int soive(vector<int> v,int n){

	int count=0;

	for(int i=n-1;i>=0;i--){
		int j=0;
		int k=i-1;

		while(j<k){
			if((v[j]+v[k])>v[i]){
				count=count+k-j;
				k--;
			}
			else
				j++;
		}
	}
	return count;
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();

	int n;
	cin>>n;
	vector<int> v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	cout<<soive(v,n);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


