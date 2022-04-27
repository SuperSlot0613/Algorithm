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
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();

	int n;
	cin>>n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}

	int count_neg=0,count_zero=0,negMax=INT_MIN,posMin=INT_MAX,product=1;

	for(int i=0;i<n;i++){

		if(v[i]==0){
			count_zero++;
			continue;
		}

		if(v[i]<0){
			count_neg++;
			negMax=max(negMax,v[i]);
		}

		if(v[i]>0 && v[i]<posMin){
			posMin=v[i];
		}
		product*=v[i];
	}

	if(count_zero==n || count_neg==0 && count_zero>0){
		cout<<0<<endl;
	}

	if(count_neg==0){
		cout<<posMin<<endl;
	}

	if(count_neg%2==0 && count_neg!=0){
		cout<<product/negMax<<endl;
	}

	cout<<product<<endl;


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


