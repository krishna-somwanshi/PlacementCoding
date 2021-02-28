//6. Program to reverse a given number.

//156
//	156%10 == 6
//	156/10 = 15

#include<iostream>

using namespace std;

int main()
{
	int rem,n,val;
	cout<<"Enter the number"<<endl;
	cin>>n;
	while( n != 0)
	{
		rem = n%10;
		val = (val*10) + rem;
		n = n/10;
	}
	cout<<"Reversed Number = "<<val;
	return 0;
}

