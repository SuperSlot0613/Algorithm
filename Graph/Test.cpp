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


set<string> per;
void permute(string s , string answer)
{
    if(s.length() == 0)
    {
        per.insert(answer);
        return;
    }
    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0,i);
        string right_substr = s.substr(i+1);
        string rest = left_substr + right_substr;
        permute(rest , answer+ch);
    }
}


int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	string s="adc";
	permute(s,"");
	for (auto itr = per.begin(); itr != per.end(); itr++) {
        cout << *itr << " ";
    }
    cout<<endl;
    int n=s.length();
    string s2="dcda";
    for(int i=0;i<s2.length()-n;i++){
        string str=s2.substr(i,n);
        cout<<str<<endl;
        if(per.find(str)!=per.end()){
            cout<<"find"<<endl;
            break;
        }
    }	



	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


