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

void addVal(node *l1,int n){
	struct node *temp,*newnode;
	int i=0;
	int data;
	while(i<n){
		newnode=(struct node*)malloc(sizeof(struct node));
		cin>>data;
		newnode->val=data;
		newnode->next=0;
		if(l1==0){
			l1=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		i++;
	}

}

int main(int argc, char const *argv[])
{
	/* code */
    clock_t begin=clock();
	int_code();
	int n,m;
	cin>>n>>m;
	struct node *head1,*head2;
	head1=0;head2=0;
	addVal(head1,n);
	addVal(head2,m);

	vector<int> v(n);
	vector<int> v2(m);
	vector<int> result(n+m);

	struct node *temp1,*temp2;
	temp1=head1;
	temp2=head2;
	while(temp1!=0){
		v.push_back(temp1->val);
		temp1=temp1->next;
	}
	while(temp2!=0){
		v2.push_back(temp2->val);
		temp2=temp2->next;
	}
	int extra=0;
	int i=v.size()-1,j=v2.size()-1;
	for(;i>=0 && j>=0;i--,j--){
		int sum=v[i]+v2[j]+extra;
		if(sum>9){
			extra=1;
			result.push_back(sum%10);

		}
		else{
			extra=0;
			result.push_back(sum);
		}
	}

	while(i>=0){
		result.push_back(v[i]);
		i--;
	}
	while(j>=0){
		result.push_back(v[j]);
		j--;
	}
	// reverse(result.begin(),result.end());
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<" ";
	}


	#ifndef ONLINE_JUDGE
	  clock_t end=clock();
	  cout<<"\n\n Executed In: "<<double(end-begin) /1000<<" ms";
	#endif
	return 0;
}


