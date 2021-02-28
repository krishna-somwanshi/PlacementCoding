// How are duplicate nodes removed in an unsorted linked list? 

#include<iostream>
#include<stdlib.h>

using namespace std;

struct node
{
	int data;
	struct node *next;
};

node *firstnode(int a)
{
	node *k=new node();
	k->data=a;
	k->next=NULL;
	return k;
}

node *creatnode(int b)
{
	node *k1=new node();
	k1->data=b;
	k1->next=NULL;
	return k1;
}

void connection(struct node *c,struct node *d)
{
	c->next=d;
}

void duplicates(node *start) 	
{
		node *ptr1, *ptr2, *dup;
		ptr1 = start;
		
	while(ptr1 != NULL && ptr1->next != NULL)
	{
		ptr2 = ptr1;
		while(ptr2->next != NULL)
		{
			if(ptr1->data == ptr2->next->data)
			{
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete(dup);
			}
			else
			{
				ptr2= ptr2->next;
			}
		}
			ptr1 = ptr1->next;
	}
}

void traverse(node *x)
{
		for(x;x!=NULL;x=x->next)	
		{
			cout<<x->data<<" ";
		}
		cout<<endl<<endl;
}

int main()
{
		struct node *x=firstnode(156);
		struct node *x1=creatnode(122);
		connection(x,x1);
		struct node *x2=creatnode(156);
		connection(x1,x2);
		struct node *x3=creatnode(200);
		connection(x2,x3);
		struct node *x4=firstnode(122);
		connection(x3,x4);
		cout<<"Initial Unsorted Linked list"<<endl;
		traverse(x);
		cout<<"Linked list After deletion duplicates"<<endl;
		duplicates(x);
		traverse(x);
	return 0;
}
