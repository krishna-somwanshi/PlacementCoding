//Program to calculate sum of 5 subjects & find percentage.
//  
#include<iostream>

using namespace std;

int main()
{
	int sub1,sub2,sub3,sub4,sub5,Sum,Per;
	cout<<"Enter the Marks For Five Subject"<<endl;
	cin>>sub1;
	cin>>sub2;
	cin>>sub3;
	cin>>sub4;
	cin>>sub5;
	Sum = sub1+sub2+sub3+sub4+sub5;
	cout<<"Sum of 5 subject = "<<Sum<<endl;
	Per = Sum/5; 
	cout << "Percentage = "<<Per;
	return 0;
}

