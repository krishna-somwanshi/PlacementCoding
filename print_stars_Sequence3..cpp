//. Program to print star Sequences3.
//*
//***
//*****

#include<iostream>

using namespace std;

int main()
{
	for(int i=0;i<=5;i++)
	{
		for(int j=5;j>=0;j--)
		{
			for(int k=0;k<j;k++)
				{	
					cout<<"*";
				}
			cout<<"\n";
		}
	}
	
	return 0;
}
