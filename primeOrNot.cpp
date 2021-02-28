//20. Program to find whether given no is a prime no or not.

#include<iostream>
using namespace std;

int main()
{
	int num;
	bool val = true;
	
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	for(int i = 2 ; i <= num/2 ; i++)
	{
		if(num%i == 0)
		{
			val = false;
			break;
		}
	}
	if(val)
			cout<<"Prime Number"<<endl;
		else
			cout<<"not Prime Number"<<endl;
	return 0;
}
