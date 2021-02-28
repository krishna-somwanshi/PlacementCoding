//11. Program to find whether given no is even or odd.

#include<iostream>

using namespace std;

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	if(num%2 == 0)
		cout<<"Number is Even"<<endl;
	else
		cout<<"Number is odd"<<endl;
	
	return 0;
}

