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


vector<long long> primesum;

void subsetvalue(vector<long long> primevalue,vector<long long> res,int n,int i){
	if(i==n){
		primesum.push_back(accumulate(res.begin(),res.end(),0));
		return;
	}
	res.push_back(primevalue[i]);
	subsetvalue(primevalue,res,n,i+1);
	res.pop_back();
	subsetvalue(primevalue,res,n,i+1);
}

int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();

	int n,q;
	cin>>n>>q;
	vector<long long> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	vector<long long> primevalue;
	for(int i=2;i<=n;i++){
		int c=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				c++;
			}
		}
		if(c==2){
			primevalue.push_back(arr[i-1]);
		}
	}
	// vector<long long> res;
	// subsetvalue(primevalue,res,primevalue.size(),0);
	while(q--){
	    long long x;
	  	cin>>x;
	  	bool ans=false;
	  	for(int i=0;i<primevalue.size();i++){
	  		long long diff=abs(x-primevalue[i]);
	  		int l=i+1;
	  		int r=primevalue.size();
	  		while(l<r){
	  			int mid=(l+r)/2;
	  			if(primevalue[mid]==diff){
	  				ans=true;
	  				break;
	  			}
	  			else if(primevalue[mid]>diff){
	  				r=mid-1;
	  			}else{
	  				l=mid+1;
	  			}
	  		}
	  		if(ans){
	  			break;
	  		}
	  	}
	  	if(ans){
	  		cout<<"YES"<<endl;
	  	}else{
	  		cout<<"NO"<<endl;
	  	}
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


