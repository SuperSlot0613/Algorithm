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
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;

		int var=1;
		vector<char> v;
		v[0]=str[0];

		bool sata=true;

		for(int i=1;i<n;i++)
		{
			if(str[i]!=str[i-1])
			{
				if(v[var-1]!=str[i]){
					v[var]=str[i];
					var++;
				}
				else{
					sata=false;
					break;
				}
			}
		}
		if(sata)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


