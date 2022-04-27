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

	int t;
	cin>>t;
	while(t--){
		int a1,a2,a3;
		cin>>a1>>a2>>a3;
		int b1,b2,b3;
		cin>>b1>>b2>>b3;

		int ay=0,an=0,by=0,bn=0;

		if(a1==1) ay++;
		else an++;

		if(a2==1) ay++;
		else an++;

		if(a3==1) ay++;
		else an++;

		if(b1==1) by++;
		else bn++;

		if(b2==1) by++;
		else bn++;
		if(b3==1) by++;
		else bn++;

		if(ay==by and an==bn){
			cout<<"Pass"<<endl;;
		}
		else
			cout<<"Fail"<<endl;;

	}

	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


