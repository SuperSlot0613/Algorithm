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
bool sortcol(const vector<double> &v1,const vector<double> &v2){
	return v1[2]>v2[2];
}
int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<double>> v(n,vector<double>(3,0));
		int w;
		cin>>w;
		for(int i=0;i<n;i++)
		{
			cin>>v[i][0]>>v[i][1];
			v[i][2]=v[i][0]/v[i][1];
		}

		sort(v.begin(),v.end(),sortcol);

		for(int i=0;i<n;i++){
			cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2];
			cout<<endl;
		}

		double maxxx=0;
		for(int i=0;i<n;i++)
		{
			if((int)(w-v[i][1])>=0)
			{
				maxxx+=v[i][0];
				w-=v[i][1];
			}
			else
			{
				double fraction=(double)(w/v[i][1]);
				maxxx+=v[i][0]*fraction;
				w=(int)(w-(v[i][1]*fraction));
				break;
			}
		}
		cout<<maxxx<<endl;
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


