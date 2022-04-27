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

	int t ;
	cin>>t ;
	while (t--)
	{
	    int num,z=0 ,i ;
	    cin>>num;
	    int arr[num] ;
	    for(i=0 ; i<num ; i++)
	    {
	         cin>>arr[i] ;
	         if(arr[i-1] >arr[i] && i>=1 ) 
	         {
	             swap(arr[i-1] ,arr[i] ) ;
	             if(arr[i-2] >arr[i-1] && i>=2)
	             {
	                 z+=2 ;
	             }
	             else if (i==1)
	             {
	                 z+=1 ;
	             }
	             else
	             {
	                 z+=1 ;
	             }
	         }
	    }
	    if (z<2)
	    cout << "yes" << endl ;
	    else
	    cout << "no" << endl ;
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


