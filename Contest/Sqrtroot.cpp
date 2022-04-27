#include<bits/stdc++.h>
#include<iostream>
using namespace std;



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

void solve(int sq,int low,int high){

    int mid=0;
	while(high-low>1)
	{
		mid=(low+high)/2;
	
		if(mid*mid==sq)
			cout<<mid;
		if(mid*mid<sq)
			low=mid+1;
		else if(mid*mid>sq)
			high=mid-1;
	}
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int sq,low=0,high=100;
	cin>>sq;
	solve(sq,low,high);
	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


