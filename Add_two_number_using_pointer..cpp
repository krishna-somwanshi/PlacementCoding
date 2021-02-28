//24. Program to add two number using pointer.

#include<iostream>

using namespace std;

int main()
{
	int a,b,*c,*d,sum;
	cout<<"enter two values"<<endl;
	cin>>a>>b;
	
	c=&a;
	d=&b;
	
	sum= *c + *d;
	
	cout << sum ;
	
	return 0;
}
