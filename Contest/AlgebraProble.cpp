#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define ll1 long long 
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
	ll1 t;
	cin>>t;
	while(t--){
		ll1 x,y;
		cin>>x>>y;
		ll1 i=x*10;
		ll1 z=-1;
		while(i<((x*10)+10)){
			if(i%y==0){
				z=i;
				break;
			}
			i++;
		}

		cout<<z<<endl;

	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


