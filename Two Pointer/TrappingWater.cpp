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

int BruteForce(vector<int>&v,int n){

	int res=0;
	for(int i=1;i<n-1;i++){
		int left=v[i];

		for(int j=0;j<i;j++){
			left=max(left,v[j]);
		}
		int right=v[i];

		for(int j=i+1;j<n;j++){
			right=max(right,v[j]);
		}

		res=res+min(left,right)-v[i];
	}
	return res;
}


int secondApproach(vector<int> v,int n){

	vector<int> prifix(n);
	vector<int> suffix(n);
	int leftmax=INT_MIN,right=INT_MIN;

	for(int i=0;i<v.size();i++){
		int val=v[i];
		leftmax=max(leftmax,val);
		prifix[i]=leftmax;
	}

	for(int i=n-1;i>=0;i--){
		int val=v[i];
		right=max(right,val);
		suffix[i]=right;
	}
	int res=0;
	for(int i=0;i<v.size();i++){
		res=res+min(prifix[i],suffix[i])-v[i];
	}

	return res;

}

int BestApproach(std::vector<int> v,int n){
	int l=0,r=n-1;
	int res=0,leftmax=0,rightmax=0;
	while(l<r){
		if(v[l]<=v[r]){
			if(v[l]>=leftmax){
				leftmax=v[l];
			}
			else{
				res+=leftmax-v[l];
			}
			l++;
		}else{
			if(v[r]>=rightmax){
				rightmax=v[r];
			}else{
				res+=rightmax-v[r];
			}
			r--;
		}
	}
	return res;
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
	cout<<BruteForce(v,n);
	cout<<endl;
	cout<<secondApproach(v,n)<<endl;
	cout<<BestApproach(v,n);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


