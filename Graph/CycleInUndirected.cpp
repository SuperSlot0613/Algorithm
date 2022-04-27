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

 bool bipartiteBfs(int src,vector<vector<int>>& graph,vector<int>& color){
        queue<int> q;
        q.push(src);
        color[src]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it : graph[node]){
                if(color[it]==-1){
                    color[it]=1-color[node];
                    q.push(it);
                }else if(color[it]==color[node]){
                    return false;
                }
            }
        }
    return true;
}

bool checkforDfs(int node,int parent,vector<int>&vis,vector<int> adj[]){
	vis[node]=1;
	for(auto it:adj[node]){
		if(!vis[it]){
			if(checkforDfs(it,node,vis,adj)) return true;
		}else if(it!=parent){
			return true;
		}
	}
	return false;
}


bool checkForcycle(int s,vector<int> vis,vector<int> adj[]){
	queue<pair<int,int>> q;
	vis[s]=1;
	q.push({s,-1});
	while(!q.empty()){
		int node=q.front().first;
		int pre=q.front().second;
		q.pop();
		for(auto it:adj[node]){
			if(!vis[it]){
				vis[it]=1;
				q.push({it,node});
			}else if(pre!=it){
				return true;
			}
		}
	}
	return false;
}


int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int v,e;
	cin>>v>>e;
	vector<int> adj[v+1];
	for(int i=1;i<=e;i++){
		int u,v1;
		cin>>u>>v1;
		adj[u].push_back(v1);
		adj[v1].push_back(u);
	}

	for(int i=1;i<=v;i++){
		cout<<i;
		for(auto x:adj[i]){
			cout<<"->"<<x;
		}
		cout<<"\n";
	}

	bool ans=false;

	vector<int> vis(v+1,0);
	for(int i=0;i<=v;i++){
		if(!vis[i]){
			//if(checkForcycle(i,vis,adj)){
			//	ans=true;
			//	break;
			//}
			if(checkforDfs(i,-1,vis,adj)){
				ans=true;
				break;
			}
		}
	}

	if(ans){
		cout<<"Cycle is Found"<<'\n';
	}else{
		cout<<"Cycle is not Found";
	}



	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


