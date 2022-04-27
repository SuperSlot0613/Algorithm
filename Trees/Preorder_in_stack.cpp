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

struct stack{
	node *data[30];
	int top;
}stack;

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

void Preorder_in_stack(node* T){
	stack s;
	s.top=-1;
	while(T!NULL){
		cout<<T->data<<" "; //Traverse To left;
		push(&s,T);
		T=T->left;
	}
	while(!empty(&s)){
		T=pop(&s);
		T=T->right;
		while(T!=NULL){
			cout<<T->data<<" ";
			push(&s,T);
			T=T->left;
		}
	}
}

void push(stack *s,node *T){
	s->top=s->top+1;
	(s->data)[s->top]=T;
}

node *pop(stack *s){
	node *T;
	T=(s->data)[s->top];
	s->top=s->top-1;
	return T;
}

int empty(stack *s){
	if(s->top==-1){
		return 1;
	}
	return 0;
}



int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	node* root=BuildFun();
	Preorder_in_stack(root);


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


