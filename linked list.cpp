#include<iostream>

using namespace std;
struct node
{
	int data;
	struct node* next;
	}*temp,*newnode,*prev;
	
	struct node* head = NULL;
    	 createnode()
	{
	newnode= new node;
		cout<<"enter data";
		cin>>newnode->data;
		newnode->next=NULL;
		if(head==NULL)
		{
			temp=head=newnode;
		}
		else{
			temp->next=newnode;
			temp=temp->next;
		}}
		display(struct node* x)
		{
			while(x!=NULL)
			{
				cout<<x->data;
				x=x->next;
			}
		}
	
	int main()
	{
		int i,n;
		cout<<"enter no. of nodes";
		cin>>n;
		for(i=0;i<n;i++)
		{
			createnode();
		}
		display(head);
		return 0;
	}
