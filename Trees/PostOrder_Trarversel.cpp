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

struct node
{
	int data;
	node* left;
	node* right;
	node(int d){
		this->data=d;
		left=NULL;
		right=NULL;
	}
};

node* BuildFun(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	node* root=new node(d);
	root->left=BuildFun();
	root->right=BuildFun();
}

struct stacknode{
	node* data;
	int flag;
};

void postorder_traversal(node* root){
	if(root==NULL) return;
	stack<struct *stacknode> st;
	stacknode stnode;
	while(root!=NULL){
		stnode.data=root;
		stnode.flag=0;
		st.push(stnode);
		root=root->left;
	}

	while(not st.empty()){
		stnode=st.pop();
		if(stnode.flag==0){
			stnode.flag=1;
			st.push(stnode);
			root=stnode.data;
			root=root->right;
			while(root!=NULL){
				stnode.data=root;
				stnode.flag=0;
				st.push(stnode);
			}
		}else{
			root=stnode.data;
			cout<<root->data<<" ";
		}
	}
}




int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	node* root=BuildFun();
	cout<<'\n';
	postorder_traversal(root);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


