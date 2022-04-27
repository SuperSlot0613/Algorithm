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

	int a[3],b[3],r[2];
	r[0]=0;
	r[1]=0;

	cin>>a[0]>>a[1]>>a[2];
	cin>>b[0]>>b[1]>>b[2];

	for(int i=0;i<3;i++)
	{
		if(a[i]>b[i])
			r[0]+=1;
		else
			r[1]+=1;

	}
	if(r[0]>r[1])
	   cout<<r[0]<<" "<<r[1]<<endl;
	else
		cout<<r[1]<<" "<<r[0]<<endl;


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


