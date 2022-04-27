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

int count_of_node(node* T){
	int i;
	if(T==NULL){
		return(0);
	}
	i=1+count_of_node(T->left)+count_of_node(T->right);
	return(i);
}

int count_of_leaf(node* T){
	int i;
	if(T==NULL){
		return(0);
	}
	if(T->left==NULL and T->right==NULL){
		return(1);
	}
	i=count_of_leaf(T->left)+count_of_leaf(T->right);
	return(i);
}

int degree_of_node(node* T){
	int i;
	if(T==NULL){
		return(0);
	}

	if(T->left==NULL && T->right==NULL){
		return(0);
	}

	if(T->left==NULL || T->right==NULL){
		i=1+degree_of_node(T->left)+degree_of_node(T->right);
		return(i);
	}
	i=degree_of_node(T->left)+degree_of_node(T->right);
	return(i);
}

int degree_of_twonode(node* T){
	int i;
	if(T==NULL){
		return(0);
	}
	if(T->left==NULL and T->right==NULL){
		return(0);
	}

	if(T->left==NULL || T->right==NULL){
		i=degree_of_twonode(T->left)+degree_of_twonode(T->right);
		return(i);
	}

	i=1+degree_of_twonode(T->left)+degree_of_twonode(T->right);
	return(i);
}

int Height_of_tree(node* T){
	int hl,hr;
	if(T==NULL){
		return(0);
	}
	if(T->left==NULL and T->right==NULL){
		return(0);
	}

	hl=Height_of_tree(T->left);
	hr=Height_of_tree(T->right);

	if(hr>hl){
		return(hr+1);
	}                 

	return(hl+1);
}

node* swapper(node* T){
	node* p;
	if(T!=NULL){
		p=T->left;
		T->left=swapper(T->right);
		T->right=swapper(p);
	}
	return(T);
}

void preorder(node* root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(node* root){
	if(root==NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

void inorder(node* root){
	if(root==NULL) return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void preorder_iterativly(node* root){
	if( root==NULL) return;
	stack<node*> st;
	st.push(root);
	while(not st.empty()){
		cout<<st.top()->data<<" ";
		node* curr=st.top();
		st.pop();
		if(curr->right){
			st.push(curr->right);
		}
		if(curr->left){
			st.push(curr->left);
		}

	}
	return;
}

void level_order(node* root){
	if(root==NULL) return;
	queue<node*> qu;
	qu.push(root);
	while(not qu.empty()){
		node* curr=qu.front();
		cout<<curr->data<<" ";
		qu.pop();
		if(curr->left){
			qu.push(curr->left);
		}
		if(curr->right){
			qu.push(curr->right);
		}
	}
	return;
}

void level_order_levelwise(node* root){
	if(root==NULL) return;
	queue<node*> qu;
	qu.push(root);
	qu.push(NULL);
	while(not qu.empty()){
		if(qu.front()==NULL){
			cout<<"\n";
			qu.pop();
			if(qu.size()==0) break;
			qu.push(NULL);
			continue;
		}
		node* curr=qu.front();
		cout<<curr->data<<" ";
		qu.pop();
		if(curr->left){
			qu.push(curr->left);
		}
		if(curr->right){
			qu.push(curr->right);
		}
	}
	return;
}




int max_level=INT_MIN;
int max_level1=INT_MIN;
void right_side_view(node* root,int curr_level){

	if(root==NULL) return;
	if(max_level<curr_level){
		cout<<root->data<<" ";
		max_level=curr_level;
	}
	right_side_view(root->right,curr_level+1);
	right_side_view(root->left,curr_level+1);

}

void left_side_view(node* root,int curr_level){

	if(root==NULL) return;
	if(max_level1<curr_level){
		cout<<root->data<<" ";
		max_level1=curr_level;
	}
	left_side_view(root->left,curr_level+1);
	left_side_view(root->right,curr_level+1);

}

void addLeftBoundary(node* root,vector<int> ans){
	node* curr=root->left;
	while(curr){
		if(curr-<left!=NULL and curr->right!=NULL){
			ans.push_back(root->data);
		}
		if(curr->left){
			curr=curr->left;
		}else{
			curr=curr->right;
		}
	}
}

void addRightBoundary(node* root,vector<int> ans){
	node* curr=root->left;
	std::vector<int> temp;
	while(curr){
		if(curr-<left!=NULL and curr->right!=NULL){
			temp.push_back(root->data);
		}
		if(curr->right){
			curr=curr->right;
		}else{
			curr=curr->left;
		}
	}

	for(int i=temp.size()-1;i>=0;i++){
		ans.push_back(temp[i]);
	}
}

void addLeafNode(node* root,vector<int> ans){
	if(root->left==NULL and root->right==NULL){
		ans.push_back(root->data);
	}
	if(root->left) addLeafNode(root->left,ans);
	if(root->right) addLeafNode(root->right,ans);
}



void BoundaryTravel(node* root){
	if(root==NULL) return;
	vector<int> ans;
	if(root->left==NULL and root->right==NULL){
		ans.push_back(root->data);
	}
	addLeftBoundary(root,ans);
	addLeafNode(root,ans);
	addRightBoundary(root,ans);

}


int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	node* root=BuildFun();
	preorder(root);
	cout<<'\n';

	preorder_iterativly(root);
	cout<<"\n";

	level_order(root);
	cout<<'\n';
	level_order_levelwise(root);
	cout<<"\n";

	right_side_view(root,0);
	cout<<'\n';
	left_side_view(root,0);

	//postorder(root);
	//cout<<'\n';
	/*inorder(root);
	cout<<'\n';
	int count=count_of_node(root);
	cout<<count<<'\n';
	int leafnode=count_of_leaf(root);
	cout<<leafnode<<" "<<'\n';
	int degree=degree_of_node(root);
	cout<<degree<<" "<<'\n';
	int degree2=degree_of_twonode(root);
	cout<<degree2<<" "<<'\n';
	int heighttree=Height_of_tree(root);
	cout<<heighttree<<" "<<'\n';
	node* root2=swapper(root);
	preorder(root2);*/


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


