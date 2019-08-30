#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node *next;
};

void enqueue(node* *head,int new_data)
{
	node* new_node=new node();
	new_node->data=new_data;
	new_node->next-NULL;
	if(*head==NULL)
	{
		*head=new_node;
	}
	else
	{
		node *last=*head;
		while(last->next!=NULL)
			last=last->next;
		last->next=new_node;
	}
	cout<<"enqueued successfull\n";
}

void dequeue(node* *head)
{
	node* t=*head;
	if(*head==NULL)
		cout<<"queue is empty\n";
	else
	{
		cout<<t->data<<endl;
		t=t->next;
		*head=t;
	}
}

int main()
{
	node *head=NULL;
	int t,x;
	loop:
	cout<<"enter 1 to enqueue\n";
	cout<<"enter 2 to dequeue\n";
	cout<<"enter 3 to exit\n";
	cin>>t;
	switch(t)
	{
		case 1:cout<<"enter the value to be enquied\n";
			   cin>>x;
			   enqueue(&head,x);
			   break;
		case 2:dequeue(&head);
			   break;
		case 3:exit(0);
	}
	goto loop;
	return 0;
}
