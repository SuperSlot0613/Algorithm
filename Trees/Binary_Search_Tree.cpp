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

struct BSTnode{
	int data;
	BSTnode* left;
	BSTnode* right;
	BSTnode(int d){
		this->data=d;
		left=NULL;
		right=NULL;

	}
};

BSTnode *insert(BSTnode* T,int x){
	if(T==NULL){
		BSTnode* T=new BSTnode(x);
		return T;
	}
	if(x>T->data){
		T->right=insert(T->right,x);
		return T;
	}
	T->left=insert(T->left,x);
	return T;
}

BSTnode* insert_iterative(BSTnode* root,int x){
	BSTnode *p,*q,*r;
	r=new BSTnode(x);
	if(root==NULL){
		return r;
	}
	p=root;
	while(p!=NULL){
		q=p;
		if(x>p->data){
			p=p->right;
		}
		else{
			p=p->left;
		}
	}

	if(x>q->data){
		q->right=r;
	}else{
		q->left=r;
	}

	return root;
}

BSTnode* find(BSTnode* root,int x){
	if(root==NULL) return NULL;

	if(x==root->data){
		return root;
	}

	if(x>root->data){
		return find(root->right,x);
	}

	return find(root->left,x);

}

BSTnode* find_max(BSTnode* root){
	while(root->right!=NULL){
		root=root->right;
	}
	return root;
}

BSTnode* find_min(BSTnode* root){
	while(root->left!=NULL){
		root=root->left;
	}
	return root;
}

BSTnode* deletion(BSTnode* root,int x){
	if(root==NULL) return NULL;

	if(x>root->data){
		root->right=deletion(root->right,x);
		return root;
	}
	if(x<root->data){
		root->left=deletion(root->left,x);
		return root;
	}

	if(root->left==NULL && root->right==NULL){
		BSTnode* temp=root;
		free(temp);
		return NULL;
	}

	if(root->left==NULL){
		BSTnode* temp1=root;
		root=root->right;
		free(temp1);
		return root;
	}

	if(root->right==NULL){
		BSTnode* temp2=root;
		root=root->left;
		free(temp2);
		return root;
	}

	BSTnode* temp3=find_min(root->right);
	root->data=temp3->data;
	root->right=deletion(root->right,temp3->data);
	return root;
}

void inorder(BSTnode* root){
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}





int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	BSTnode* root;
	root=NULL;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		root=insert(root,x);
	}
	cout<<'\n';
	inorder(root);
	// cout<<"\n";
	// int num;
	// cin>>num;
	// BSTnode* value=find(root,num);
	// cout<<"Value is found : "<<value->data<<" ";
	// cout<<"This is Second root"<<"\n";
	// BSTnode* root1=NULL;
	// for(int i=0;i<n;i++){
	// 	cin>>x;
	// 	root1=insert_iterative(root1,x);
	// }
	// inorder(root1);
	cout<<"\n";
	int y;
	cin>>y;
	deletion(root,y);
	cout<<"\n";
	inorder(root);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


