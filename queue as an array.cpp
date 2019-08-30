#include<iostream>
#define max 10
using namespace std;
int q[max],f=-1,r=-1;

bool isempty()
{
	return(f==-1 && r==-1);
}

bool isfull()
{
	return (r+1)%max==f?true:false; 		
}


void enqueue(int new_data)
{
	if(isfull())
	{
		cout<<"queue is full\n";
		return;
	}
	 if(isempty())
	{
		f=r=0;
	}
	else
	{
		r=(r+1)%max;
	}
	q[r]=new_data;
}

void dequeue()
{
	if(isempty())
	{
		cout<<"queue is empty\n";
		return;
	}
	cout<<q[f]<<endl;
	if(f==r)
	{
		f=r=-1;
    }
	else
	{
		f=(f+1)%max;		
	}
	
}

int main()
{
	int t,x;
	loop:
	cout<<"enter 1 to engueue\n";
	cout<<"enter 2 to dequeue\n";
	cout<<"enter 3 to exit\n";
	cin>>t;
	switch(t)
	{
		case 1:cout<<"enter data to be enqueued\n";
			   cin>>x;
			   enqueue(x);
			   break;
		case 2:dequeue();
			   break;
	    case 3:exit(0);
	}
	goto loop;
	return 0;
}
