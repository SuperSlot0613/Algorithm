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
std::string toBinary(long int n)
{
	std::string r;
	while(n!=0)
	{
		r=(n%2==0 ?"0":"1")+r;
		n/=2;
	}
	return r;
}
void solve(){
	long int c;
	cin>>c;
	string ch=toBinary(c);
	long int len=ch.size()-1;
	long int a=0,b=0;
	if(ch[0]=='1')
	{
		a=a+1*pow(2,len);
		b=b+0;
		len-=1;
	}
	else
	{
		a=a+0;
		b=b+1*pow(2,len);
		len-=1;
	}
	long int i=1;
	while(i<ch.size())
	{
		if(ch[i]=='1')
		{
			a=a+0;
			b=b+1*pow(2,len);
			len-=1;
		}
		else
		{
		   a=a+1*pow(2,len);
           b=b+1*pow(2,len);
           len-=1;
		}
		i++;
	}
	cout<<a*b<<endl;
	
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	long int t;
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


