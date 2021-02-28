//9. Program to show the use of conditional operator.

//	expression1 ? expression2 : expression3;


#include<iostream>

using namespace std;

int main()
{
	int num1,num2,num3,num4,max,max1,max2;
	
	cout<<"enter the number 1 "<<endl;
	cin>>num1;
	cout<<"enter the number 2 "<<endl;
	cin>>num2;
	cout<<"enter the number 3 "<<endl;
	cin>>num3;
	
	
	//max =  num1 > num2 ? num1 : num2 ;
	max =  num1 > num2 ? (max1 = num1 > num3 ? num1 : num3) : (max2 = num2 > num3 ? num2 : num3) ;
	
	cout<<"Max = "<<max<<endl;
	return 0;
}

