//5. Program to show swap of two no’s without using third variable.

#include<iostream>

using namespace std;

int main()
{
	int num1=10;
	int num2=20;
	
	cout<<"Before  swap = Num1 = "<<num1<<" NUM2 = "<<num2<<endl;
	
	num1 = num1 + num2;
	//30  =  10   +  20; 
	num2 = num1 - num2; 
	//10	 =	30  -  20 ;
	num1 = num1 - num2;
	//20		30  - 	10;
	
	cout<<"After  swap = Num1 = "<<num1<<" NUM2 = "<<num2<<endl;
	return 0;
}

