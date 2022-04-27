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
#define vll vector<ll>


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
		ll n, k;
        cin >> n >> k;
        vll arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool all_zero = true;
        for(auto x: arr){
            if(x > 0){
                all_zero = false;
                break;
            }
        }
        if(all_zero){
            cout << 0 << endl;
            continue;
        }
        if(k == 0){
            ll ans = 0;
            for(auto x: arr){
                ans += x;
            }
            cout << ans << endl;
            continue;
        }
        set<ll> pos;
        set<ll, greater<ll>> posG;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                pos.insert(i);
                posG.insert(i);
                pos.insert(i+n);
                posG.insert(i+n);
            }
        }
        vll ans_arr(n, k);
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                ll val1 = *pos.lower_bound(i);
                ll val2 = *posG.lower_bound(i+n);
                ll dist = min(abs(val1 - i), abs(val2 - (i+n)));
                ans_arr[i] -= dist;
            }
        }
        for(auto &x: ans_arr){
            if(x < 0){
                x = 0;
            }
        }
        ll sum = 0;
        for(auto x: arr){
            sum += x;
        }
        for(auto x: ans_arr){
            sum += 2LL*x;
        }
        cout << sum << endl;
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


