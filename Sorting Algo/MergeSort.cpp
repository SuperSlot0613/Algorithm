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

void merge(vector<int> &v,int start,int end){
	int mid=(start+end)/2;;
	int i=start,j=mid+1;
	//unique_ptr<int[]> result(new int[end-start]) This is smart pointer
	vector<int> result(end-start);
	int k=0;

	while(i<=mid and j<=end){
		if(v[i]<v[j]){
			result[k++]=v[i++];
		}
		else{
			result[k++]=v[j++];
		}
	}

	while(i<=mid){
		result[k++]=v[i++];
	}

	while(j<=end){
		result[k++]=v[j++];
	}

	k=0;
	for(int i=start;i<=end;i++){
		v[i]=result[k];
		k++;
	}
}

void MergeSort(vector<int> &v,int start,int end ){

	if(start >=end) return;

	int mid=(start+end)/2;

	MergeSort(v,start,mid);
	MergeSort(v,mid+1,end);
	merge(v,start,end);

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

	MergeSort(v,0,v.size()-1);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


