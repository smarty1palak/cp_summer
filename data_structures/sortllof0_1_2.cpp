#include<bits/stdc++.h>

using namespace std;
struct node
{
	int data;
	struct node  *next;
};
struct node *header=NULL, *rear=NULL;
int a[3];
void createnode(int x)
{
	struct node* temp =new struct node;
	temp->data=x;
	if(x==0)
		a[0]++;
	else if(x==1)
		a[1]++;
	else
		a[2]++;
	if(header==NULL)
	{
		header=temp;
		header->next=NULL;
		rear=header;
	}
	else
	{
		rear->next=temp;
		rear=temp;
		rear->next=NULL;
	}
}

void sortlist()
{
	struct node *temp=header;
	int i=0;
	while(temp!=NULL)
	{
		if(a[i]==0)
			i++;
		else
		{
			temp->data=i;
			temp=temp->next;
			a[i]--;
		}
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
		cout<<"1.Enter 2.Sort 3.Print 4.Exit\n";
		cin>>choice;
		if(choice==1)
		{
			cout<<"Enter data"<<endl;
			cin>>x;
			createnode(x);
		}
		else if(choice==2)
		{
			sortlist();
		}
		else
		{
			display();
		}
	}	
}