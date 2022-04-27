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

void bfsTravel(int v,vector<int> adj[]){
	vector<int> bfs;
	vector<int> vis(v,0);
	for(int i=0;i<v;i++){
		if(!vis[i]){
			queue<int> q;
			q.push(i);
			vis[i]=1;
			while(!q.empty()){
				int node=q.front();
				q.pop();
				bfs.push_back(node);
				for(auto it:adj[node]){
					if(!vis[it]){
						q.push(it);
						vis[it]=1;
					}
				}
			}
		}
	}

	for(int i=0;i<bfs.size();i++){
		cout<<bfs[i]<<" ";
	}
}

void DfsTravel(int node,vector<int>& vis,vector<int> adj[],vector<int>& storebfs){
	storebfs.push_back(node);
	vis[node]=1;
	for(auto it:adj[node]){
		if(!vis[it]){
			DfsTravel(it,vis,adj,storebfs);
		}
	}
}

int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int v,edges,u,ve;
	cin>>v>>edges;
	vector<int> adj[v];
	vector<int> adj1[v];
	cout<<"Undirected Graph"<<"\n";
	for(int i=0;i<edges;i++){
		cin>>u>>ve;
		adj[u].push_back(ve);
		adj[ve].push_back(u);
	}

	for(int i=0;i<v;i++){
		for(auto x:adj[i]){
			cout<<"->"<<x;
		}
		cout<<"\n";
	}

	cout<<"Direacted Graph"<<"\n";
	for(int i=0;i<edges;i++){
		cin>>u>>ve;
		adj1[u].push_back(ve);
	}

	for(int i=0;i<v;i++){
		for(auto x:adj1[i]){
			cout<<"->"<<x;
		}
		cout<<'\n';
	}

	vector<int> storebfs;
	vector<int> storebfs1;
	vector<int> vis(v,0);
	vector<int> vis1(v,0);
	cout<<"Undirected Graph"<<"\n";
	for(int i=0;i<v;i++){
		if(!vis[i]){
			DfsTravel(i,vis,adj,storebfs);
		}
	}
	for(int i=0;i<storebfs.size();i++){
		cout<<storebfs[i]<<" ";
	}
	cout<<'\n';
	cout<<"Direacted Graph"<<'\n';
	for(int i=0;i<v;i++){
		if(!vis1[i]){
			DfsTravel(i,vis1,adj1,storebfs1);
		}
	}
	for(int i=0;i<storebfs1.size();i++){
		cout<<storebfs1[i]<<" ";
	}
	cout<<'\n';
	cout<<"BFS Traversal"<<"\n";
	bfsTravel(v,adj);



	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


