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
	string a,b;
	cin>>a;
	cin>>b;
	int num1=stoi(a,0,2);
	int num2=stoi(b,0,2);
	cout<<num1<<" "<<num2<<" ";
	int number=num1+num2;
	string ans="";
    string val=bitset<32>(number).to_string();
    const auto loc1 = val.find('1');
    if(loc1 != string::npos)
        ans=val.substr(loc1);
    cout<<ans;


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


