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

void solve(){
	int n;
	cin>>n;
	int a[n];
	int odd=0,sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	if(sum%2==0)
		cout<<0<<endl;
	else
	{
        for(int j=0;j<n;j++)
        {
        	if((a[j]%2==0) and ((a[j]+1)/2-1)<=0)
        	{
        		odd=1;
        		break;
        	}
        }
        if(odd==0)
	    {
		  cout<<-1<<endl;
	    }
	    else
	    {
		 cout<<1<<endl;
	    }
	}
	
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int t;
	cin>>t;
	while(t-->0)
	{
		solve();
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


