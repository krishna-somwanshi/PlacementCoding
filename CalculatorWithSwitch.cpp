//14. Program to display arithmetic operator using switch case.

#include<iostream>

using namespace std;

int main()
{
	int a,b,c,choice;
	cout<<"Enter two values for calculation"<<endl;
	cin>>a>>b;
	cout<<"1. Addition 2. Subtraction 3. Multiplication 4. Division 5. Exit"<<endl;
	while(1)
	{
	cout<<"Enter your choice"<<endl;
	cin>>choice;
		switch(choice)
		{
			case 1:
			c=a+b;
			cout<<"Addition = "<<c<<endl;	
			break;
			
			case 2:
			c=a-b;
			cout<<"subtraction = "<<c<<endl;	
			break;
			
			case 3:
			c=a*b;
			cout<<"multiplication = "<<c<<endl;	
			break;
			
			case 4:
			c=a/b;
			cout<<"Divison = "<<c<<endl;	
			break;
			
			case 5:
				return 0;
		}
	}
}

