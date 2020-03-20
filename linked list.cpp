#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
	}*temp,*newnode,*prev,*opes;
	
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
		display(struct node* x,int count)
		{
			
			while(x!=NULL)
			{
				cout<<x->data;
				x=x->next;
				count++;
			}
			if(count==1)
			{
				temp=head;
			}
			
		}
		deletenode(int n)
		{
			int i=1,d;
			cout<<"enter the node which you want to delete";
			cin>>d;
			opes=head;
			if(d==1)
			{
				head=opes->next;
			    delete opes;
			}
			else if(d==n)
			{
				while(opes->next!=NULL)
				{
					prev=opes;
					opes=opes->next;
				}
				prev->next=NULL;
				delete opes;
			}
			else
			{
				while(i<d)
				{
					prev=opes;
					opes=opes->next;
					i++;
				}
				prev->next=opes->next;
				delete opes;
			}
		}
	
	int main()
	{
		int i,n,c=0;
		cout<<"here we can see list is empty";
		display(head,c);
		cout<<endl;
		while(1)
		{
		    cout<<"enter what do u want to do ";
		    cin>>n;
		    switch(n)
		     {
		        case 1:
		        createnode();
		       	display(head,c);
		       	break;
	       	    case 2:
			    deletenode(c);
			    display(head,c);
			    break;
			    case 3:
			    	exit (0);
			    	break;
	           	default:
		    	cout<<"operation successful on linked list";
	        }
	    }	   
	}				
			
