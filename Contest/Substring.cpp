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
		string s;
		cin>>s;
		string ans="No";
		if(s.length()>1){
			for (int i = 0; i < s.length()-1; i++) {
			    for (int j = i+1; j <= s.length(); j++) {
			        string temp=s.substr(i,j);
			        long long value = std::bitset<64>(temp).to_ullong();
					int flag=0;
					for (i = 2; i <= value / 2; ++i) {
					    if (value % i == 0) {
					       flag = 1;
					       break;
					    }
			  		}
			  		if (flag == 0)
			  			ans="Yes";
				}
			}
	    }
		cout<<ans<<endl;			
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


