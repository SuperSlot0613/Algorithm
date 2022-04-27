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
		string str;
		cin>>str;
		bool sa=false,la=false,sp=false,in=false;
		if(str.size()>=10){
			if((int(str[0])>=65 && int(str[0])<=90) || (int(str[str.size()-1])>=65 && int(str[str.size()-1])<=90)){
				cout<<"No"<<endl;
			}
			else if((int(str[0])>=48 && int(str[0])<=57) || (int(str[str.size()-1])>=48 && int(str[str.size()-1])<=57)){
				cout<<"No"<<endl;
			}
			else if(str[0]=='@' || str[0]=='#' || str[0]=='%' || str[0]=='&' || str[0]=='?'){
				cout<<"No"<<endl;
			}
			else if(str[str.size()-1]=='@' || str[str.size()-1]=='#' || str[str.size()-1]=='%' || str[str.size()-1]=='&' || str[str.size()-1]=='?'){
				cout<<"No"<<endl;
			}
			else{
				for(int i=0;i<str.size();i++){
					if((int(str[i])>=65 && int(str[i])<=90)){
						la=true;
					}
					else if((int(str[i])>=48 && int(str[i])<=57)){
						in=true;
					}
					else if((int(str[i])>=97 && int(str[i])<=122)){
						sa=true;
					}
					else{
						sp=true;
					}
				}

				if(sa && la && sp && in){
					cout<<"Yes"<<endl;
				}
				else
				{
					cout<<"No"<<endl;
				}
			}

		}
		else{
			cout<<"No"<<endl;
		}
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


