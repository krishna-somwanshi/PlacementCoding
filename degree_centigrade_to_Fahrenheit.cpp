//2. 3. Program to convert temperature from degree centigrade to Fahrenheit.
// 	(56°C × 9/5) + 32 = 132.8°F
//	input=(degree) 		output
#include<iostream>

using namespace std;

int main()
{
	float Centigrade,fahrenheit;
	cout<<"Enter the degree Centigrade"<<endl;
	cin>>Centigrade;
	fahrenheit = Centigrade * 9/5 + 32;
	cout<<"fahrenheit  = "<<fahrenheit<<endl;
	return 0;
}

