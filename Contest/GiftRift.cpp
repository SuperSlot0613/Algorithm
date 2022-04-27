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
	int r,c;
	cin>>r>>c;
	long a[r][c];
	long min_row[r];
	long max_col[c];
	fill(min_row,min_row+r,-1);
	fill(max_col,max_col+c,-1);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
			if(min_row[i]==-1)
				min_row[i]=a[i][j];
			else
				min_row[i]=min(min_row[i],a[i][j]);

			if(max_col[j]==-1)
				max_col[j]=a[i][j];
			else
				max_col[j]=max(max_col[j],a[i][j]);
		}
	}
	bool found=false;
	long val;
	for(int i=0;i<r && !found;i++)
	{
	    for(int j=0;j<c && !found;j++)
		{
            val=a[i][j];
            if(val==min_row[i] && val==max_col[j])
            {
                found=true;
                break;
            }
	    }
	}
    if(found)
		cout<<val<<endl;
	else
		cout<<"GUESS"<<endl;


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


