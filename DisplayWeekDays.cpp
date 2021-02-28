#include<iostream>

using namespace std;

int main()
{
	int choice=1;
	while(1)
	{
	switch (choice)
	{
		case 1:
			cout<<"Monday"<<endl;
			break;
		case 2:
			cout<<"tuesday"<<endl;
			break;
		case 3:
			cout<<"Wednesdaya"<<endl;
			break;
		case 4:
			cout<<"thursday"<<endl;
			break;
		case 5:
			cout<<"Friday"<<endl;
			break;			
		case 6:
			cout<<"satueday"<<endl;
			break;
		case 7:
			cout<<"sunday"<<endl;
			break;	
		default:
			return 0;		
	}
	choice++;
	}	
	return 0;
}
