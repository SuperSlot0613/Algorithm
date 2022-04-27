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


// void int_code()
// {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	cout.tie(0);
// 	#ifndef ONLINE_JUDGE
//       freopen("input.txt", "r", stdin);
//       freopen("output.txt", "w", stdout);
//     #endif // ONLINE_JUDGE
// }

struct node{
	int val;
	struct node *next;
	struct node *prev;
};


void InsertBegin(node *head){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter the number";
	cin>>newnode->val;
	newnode->next=head;
	newnode->prev=0;
	head=newnode;
}

void InsertEnd(node *head){
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter the number";
	cin>>newnode->val;
	newnode->next=0;
	temp=head;
	while(temp->next!=0){
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->prev=temp;
}

void InsertMiddle(node *head,int count){
	struct node *newnode,*temp,*ptr;
	cout<<"Enter the position";
	int p;
	cin>>p;
	if(p>count){
		cout<<"Enter valid Position";
	}
	else{
		int i=1;
		ptr=0;
		temp=head;
		while(i<p){
			ptr=temp;
			temp=temp->next;
			i++;
		}
		newnode=(struct node*)malloc(sizeof(struct node));
	    cout<<"Enter the number";
	    cin>>newnode->val;
	    newnode->next=temp;
	    newnode->prev=ptr;
	    ptr->next=newnode;
	    temp->prev=newnode;

	}

}

void DeleteAtbegin(node *head){
	struct node *temp;
	temp=head;
	head=head->next;
	free(temp);
}

void DeleteAtend(node *head){
	struct node *temp,*ptr;
	temp=head;
	while(temp->next!=0){
		ptr=temp;
		temp=temp->next;
	}
	ptr->next=0;
	free(temp);
}

void DeleteAtmid(node *head,int count){
	struct node *temp,*nextnode;
	cout<<"Enter the Position";
	int p;
	cin>>p;
	if(p>count){
		return;
	}
	else{
		int i=1;
		temp=head;
		while(i<pos-1){
			temp=temp->next;
			i++
		}
		nextnode=temp->next;
		temp->next=nextnode->next;
		free(nextnode);

	}

}

void reverse(node *head){
	struct node *prev,*nextnode,*curr;
	nextnode=curr=head;
	prev=0;
	while(nextnode!=0){
		nextnode=nextnode->next;
		curr->next=prev;
		prev=curr;
		curr->nextnode;
	}
}


int main(int argc, char const *argv[])
{
	/* code */
 //    clock_t begin=clock();
	// int_code();

	struct node *head,*newnode,*temp;
	head=0;
	int ch=1,count=0;

	while(ch==1){
		newnode=(struct node*)malloc(sizeof(struct node));
		cout<<"Enter the number";
		cin>>newnode->val;
		newnode->next=0;
		newnode=>prev=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		cout<<"Enter the choice";
		cin>>ch;
		count++;
	}

	do{
		cout<<"Enter The choice";
		cin>>ch;
		switch(ch){
			case 1:
			   InsertBegin(head);
			   break;
			case 2:
			   InsertEnd(head);
			   break;
			case 3:
			   InsertMiddle(head,count);
			   break;
			case 4:
			   DeleteAtbegin(head);
			   break;
			case 5:
			   DeleteAtend(head);
			   break;
			case 6:
			   DeleteAtmid(head,count);
			   break;
			case 7:
			   reverse(head);
			   break;
		}

	}while(ch!=0);

	temp=head;
	while(temp!=0){
		cout<<temp->val<<"->";
		temp=temp->next;
	}



	// #ifndef ONLINE_JUDGE
	//   clock_t end=clock();
	//   cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	// #endif
	return 0;
}


