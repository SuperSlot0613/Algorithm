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

void counsort(vector<int> &v,int n,int exp){
	vector<int> output(n);
	vector<int> count(10,0);

	for(int i=0;i<n;i++){
		count[(v[i]/exp)%10]++;
	}

	for(int i=1;i<10;i++){
		count[i]+=count[i-1];
	}

	for(int i=n-1;i>=0;i--){
		output[count[(v[i]/exp)%10]-1]=v[i];
		count[(v[i]/exp)%10]--;
	}

	for(int i=0;i<output.size();i++){
		v[i]=output[i];
		cout<<v[i]<<" ";
	}
	cout<<endl;
}


void Radixsort(vector<int> &v,int n){

	int m=*max_element(v.begin(),v.end());

	for(int exp=1;m/exp>0;exp *= 10){
		counsort(v,n,exp);
	}

}


int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n;
	cin>>n;
	vector<int> v(n,0);

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>v[i];
	}

	Radixsort(v,n);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


