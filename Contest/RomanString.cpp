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
	map<char,int> mp;
    mp['I']=1;mp['V']=5;mp['X']=10;mp['L']=50;mp['C']=100;
    mp['D']=500;
    mp['M']=1000;
    vector<int> v;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        v.push_back(mp[s[i]]);
    }
    long long ans=0; 
    for(int i=0;i<v.size();){
        if(i==v.size()-1){
            ans=ans+v[i];
            i++;
        }else if(v[i]<v[i+1]){
            ans=ans+v[i+1]-v[i];
            i=i+2;
        }else{
            ans=ans+v[i];
            i++;
        }
          
    }
    cout<<ans;


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


