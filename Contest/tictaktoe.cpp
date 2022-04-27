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
	ll t;
	cin>>t;
	while(t--){
		string str1;
		char tic[3][3];
		int x=0,o=0,s=0;

		for(int i=0;i<3;i++)
		{
			cin>>str1;
			for(int j=0;j<3;j++)
			{
				tic[i][j]=str1[j];
				if(str1[j]=='X')
					x++;
				else if(str1[j]=='O')
					o++;
				else
					s++;
			}
			
		}

		int px=0,po=0;
		if(tic[0][0]=='X' and tic[0][1]=='X' and tic[0][2]=='X') px=1;
		if(tic[0][0]=='X' and tic[1][1]=='X' and tic[2][2]=='X') px=1;
		if(tic[0][0]=='X' and tic[1][0]=='X' and tic[2][0]=='X') px=1;
		if(tic[0][1]=='X' and tic[1][1]=='X' and tic[2][1]=='X') px=1;
		if(tic[0][2]=='X' and tic[1][1]=='X' and tic[2][0]=='X') px=1;
		if(tic[1][0]=='X' and tic[1][1]=='X' and tic[1][2]=='X') px=1;
		if(tic[0][2]=='X' and tic[1][2]=='X' and tic[2][2]=='X') px=1;
		if(tic[2][0]=='X' and tic[2][1]=='X' and tic[2][2]=='X') px=1;

		if(tic[0][0]=='O' and tic[0][1]=='O' and tic[0][2]=='O') po=1;
		if(tic[0][0]=='O' and tic[1][1]=='O' and tic[2][2]=='O') po=1;
		if(tic[0][0]=='O' and tic[1][0]=='O' and tic[2][0]=='O') po=1;
		if(tic[0][1]=='O' and tic[1][1]=='O' and tic[2][1]=='O') po=1;
		if(tic[0][2]=='O' and tic[1][1]=='O' and tic[2][0]=='O') po=1;
		if(tic[1][0]=='O' and tic[1][1]=='O' and tic[1][2]=='O') po=1;
		if(tic[0][2]=='O' and tic[1][2]=='O' and tic[2][2]=='O') po=1;
		if(tic[2][0]=='O' and tic[2][1]=='O' and tic[2][2]=='O') po=1;


		if((px==1 && po==1) || (x-o)<0 ||(x-o)>1 ) cout<<3<<endl;
		else if(x==0 && o==0 && s>0) cout<<2<<endl;
		else if(px==1 && po==0 && x>o) cout<<1<<endl;
		else if(px==0 && po==1 && x==o) cout<<1<<endl;
		else if(px==0 && po==0 && s==0) cout<<1<<endl;
		else if(px==0 && po==0 && s>0) cout<<2<<endl;
		else cout<<3<<endl;




		
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


