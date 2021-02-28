//7. Program to find gross salary.

#include<iostream>

using namespace std;

int main()
{
	int Asal,payt,gross;
	
	cout<<"Enter the package for year"<<endl;
	cin>>Asal;
	cout<<"Enter the pay times in year"<<endl;
	cin>>payt;
	
	gross = Asal / payt ;
	
	cout<<"Gross salalery = "<<gross<<endl;
	
return 0;	
}
