//21. Program to display sum of series 1+1/2+1/3+……….+1/n.

#include<iostream>
using namespace std;

int main()
{
	int i,n,num=1;
	cout<<"Enter value of N"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<i+num<<" ";
	}
	return 0;
}
