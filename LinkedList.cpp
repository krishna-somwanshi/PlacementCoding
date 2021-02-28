//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class node
//{
//public:
//    int data;
//    int *next;
//    int *prv;
//public:
//    node *insert(int);
//	void connection(node*,node*);
//    void traverse(node*);
//};
//
//node * node::insert(int t)
//    {
//       node *temp = new node();
//        temp->data = t;
//        temp->next = NULL;
//        temp->prv = NULL;
//    }
//    
//void node::connection(node *n1,node *n2)
//	{
//		n1->next = n2;
//		n2->prv = n1;
//	}
//
//void node::traverse(node* temp)
//{
//	for(temp;temp->next != NULL; temp = temp->next)
//	{
//		cout<<temp->data<<endl;
//	}
//}
//    
//int main()
//{
//	node *n1;
//	node *r1;
//	r1=n1->insert(10);
//	node *r2;
//	r2 = n1->insert(20);
//	
//	node n1;
//	n1.connection(r1,r2);
//	
//	traverse(r1);
//	
//
//	return 0;	
//}    
    





#include<iostream>

using namespace std;

class node
{
	public:
	int data;
	node *next;
	node *prv;
	public:
	node *firstnode(int );
	node *creatnode(int );
	void connection(node *n1,node *n2);			
	void traverse(node *);
	
};	
	node * node::firstnode(int input)
	{
		node *first=new node();
	
		first->data=input;
		first->next=NULL;
		first->prv=NULL;	
		
		return first;
	}
	node *node::creatnode(int input)
	{
		node *create=new node();
		create->data=input;
		create->next=NULL;
	
		return create;
	}
	
void node::connection(node *n1,node *n2)
	{
		n1->next=n2;
		n2->prv=n1;
	}
	
	void traverse(node *temp)
	{
	for(;temp != NULL;temp=temp->next)
		cout<<temp->data<<endl;	
	}
		
int main()
{
	int val = 2;
	do
	{
		int a,b,c,e;
	node *d,*r1;
		cin>>a;
	r1=d->firstnode(a);
	
	node *d1,*r2;
		cin>>b;	
	r2=d1->creatnode(b);
	
	node *d2,*r3;
	cin>>c;
	r3=d2->creatnode(c);
	
	node *d3,*r4;
	cin>>e;
	r4=d3->creatnode(e);
	
	node result;
	result.connection(r1,r2);
	result.connection(r2,r3);
	result.connection(r3,r4);
	traverse(r1); 
	}while(--val);
	return 0;
}
