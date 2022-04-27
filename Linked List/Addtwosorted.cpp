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



struct node{
	int val;
	struct node *next;
};



node* sortingList(ndoe *head1,node *head2,int n,int m){
	int i=0,j=0;
	struct node *temp1,*temp2,*ans,*anste;
	temp1=head1,temp2=head2;
	ans=nullptr;
	while(i<n && j<m){
		if(temp1->val<=temp2->val){
			if(ans==nullptr){
				ans=anste=temp1;
			}
			else{
				anste->next=temp1;
				anste=temp1;
			}
			temp1=temp1->next;
			i++;
		}
		else{
			if(ans==nullptr){
				ans=anste=temp2;
			}
			else{
				anste->next=temp2;
				anste=temp2;
			}
			temp2=temp2->next;
			j++;

		}

	}

	while(i<n){
		anste->next=temp1;
		i++;
		temp1=teamp1->next;
	}

	while(j<m){
		anste->next=temp2;
		j++;
		temp2=temp2->next;
	}
}



int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n,m;
	cin>>n>>m;
	struct node *head1,*head2,*newnode,*temp,*ans;
	head1=nullptr;
	head2=nullptr;
	temp=nullptr;

	for(int i=0;i<n;i++){
		newnode=(struct node*)malloc(struct node);
		cin>>newnode->val;
		newnode->next=nullptr;
		if(head1==nullptr){
			head1=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}

	}
	temp=nullptr;

	for(int i=0;i<m;i++){
		newnode=(struct node*)malloc(struct node);
		cin>>newnode->val;
		newnode->next=nullptr;
		if(head2==nullptr){
			head2=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}

	}

	ans=sortingList(head1,head2,n,m);
	temp=ans;
	while(temp!=nullptr){
		cout<<temp->val;
		temp=temp->next;
	}




	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


