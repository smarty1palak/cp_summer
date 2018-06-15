#include<bits/stdc++.h>

using namespace std;
struct node
{
	int data;
	struct node *prev, *next;
};
struct node *header=NULL, *rear=NULL;
void createnode(int x)
{
	struct node* temp =new struct node;
	temp->data=x;
	if(header==NULL)
	{
		header=temp;
		header->prev=NULL;
		header->next=NULL;
		rear=header;
	}
	else
	{
		rear->next=temp;
		temp->prev=rear;
		rear=temp;
		rear->next=NULL;
	}
}

void deletenode(int x)
{
	struct node *temp=header;
	while(temp!=NULL)
	{
		if(temp==header && temp->data==x)
		{
			header=temp->next;
			if(header!=NULL)
			header->prev=NULL;
		}
		else if(temp==rear && temp->data==x)
		{
			rear=temp->prev;
			rear->next=NULL;
		}
		else if(temp->data==x)
		{
			temp->next->prev=temp->prev;
			temp->prev->next=temp->next;
		}
		temp=temp->next;
	}
}

void display()
{
	struct node *temp=header;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}


int main()
{
	int n, choice=0,x;
	while(choice!=4)
	{
		cout<<"1.Enter 2.Delete 3.Print 4.Exit\n";
		cin>>choice;
		if(choice==1)
		{
			cout<<"Enter data"<<endl;
			cin>>x;
			createnode(x);
		}
		else if(choice==2)
		{
			cout<<"Enter the value of node to be deleted"<<endl;
			cin>>x;
			deletenode(x);
		}
		else
		{
			display();
		}
	}	
}