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
	map<int,int> mp;
	queue<int> qe;
	qe.push(n);
	while(!qe.empty()){
		int num=qe.front();
		mp[num]++;
		qe.pop();
		if(num>2){
			qe.push(num-1);
			qe.push(num-2);
		}else if(num==2){
			qe.push(num-1);
		}
	}

	for(int i=1;i<=n;i++){
		cout<<mp[i]<<" ";
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


