//19. Program to find factorial of a number.
#include<iostream>
using namespace std;
int main()
{
	int num;
	int fact=1;
	cout<<"Enter the number to find it's factorial"<<endl;
	cin>>num;
	while( num != 0)
	{
		fact = fact * num;
		num--;
	}
	cout<<fact;
	return 0;
}
