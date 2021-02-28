//10. Program to find that entered year is leap year or not.

#include<iostream>

using namespace std;

int main()
{
	int year;
	cout<<"Enter the year"<<endl;
	cin>>year;
	if( year%4 == 0)
	{
		if( year%100 == 0)
		{
			if( year%400 == 0 )
				{	
					cout<<"Leap Year"<<endl;
				}
			else
				{	
					cout<<"Not Leap Year"<<endl;
				}	
		}
		else
		{
			cout<<"Leap Year"<<endl;
		}
	}
		else
		{
			cout<<"not leap year"<<endl;
		}
	return 0;
}

