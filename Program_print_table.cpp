//8. Program to print a table of any number.

#include<iostream>

using namespace std;

int main()
{
	int num,i=1,table;
	cout<<"Enter the number"<<endl;
	cin>>num;
		
	while(i != 11)
	{
		table = num*i;
		cout<<num<<"*"<<i<<" = "<<table<<endl;
		i++;
	}	
	return 0;
}

