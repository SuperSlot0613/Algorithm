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
vector<string> sub;
string ans="No";

void printSubset(string s,int i,int n,string osf){
	if(i==n){
		long long value = std::bitset<64>(osf).to_ullong();
		int flag=0;
		for (i = 2; i <= value / 2; ++i) {
		    if (value % i == 0) {
		      flag = 1;
		      break;
		    }
  		}
  		if (flag == 0)
  			ans="Yes";
		return;
	}

	printSubset(s,i+1,n,osf+s[i]);
	printSubset(s,i+1,n,osf);
}


int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int i=0,n=s.length();
		string osf="";
		if(s.length()<=1){
			cout<<ans<<endl;
		}
		else{
			printSubset(s,i,n,osf);
			cout<<ans<<endl;
		}
	}

	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


