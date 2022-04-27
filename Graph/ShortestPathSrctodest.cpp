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
vector<vector<int>> graph;

void addEdges(int u,int v){
	graph[u].push_back(v);
	graph[v].push_back(u);
}

vector<int> sssp(int src,int dist,int n){
	vector<bool> vis(n,false);
	vector<int> parent(n,-1);
	vector<int> dest(n,0);
	queue<int> qe;
	qe.push(src);
	vis[src]=true;
	while(not qe.empty()){
		int node=qe.front();
		qe.pop();
		for(auto neighbour:graph[node]){
			if(!vis[neighbour]){
				qe.push(neighbour);
				vis[neighbour]=true;
				parent[neighbour]=node;
				dest[neighbour]=dest[node]+1;
			}
		}
	}

	int temp=dist;
	vector<int> result;
	while(temp!=-1){
		result.push_back(temp);
		temp=parent[temp];
	}
	reverse(result.begin(),result.end());
	return result;
}


int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();

	graph.reserve(8);
	addEdges(0,3);
	addEdges(0,1);
	addEdges(1,2);
	addEdges(2,3);
	addEdges(3,4);
	addEdges(4,5);
	addEdges(4,6);
	addEdges(5,6);
	addEdges(0,6);
	vector<int> path=sssp(0,5,8);
	for(auto it:path){
		cout<<it<<" ";
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


