
//1. Program to find area and circumference of circle.
	// C = 2 * pi * r

#include<iostream>

using namespace std;

int main()
{
	int pi = 3.141592653589793238;
	int r,C=0;
	cout<<"Enter the radious"<<endl;
	cin>>r;
	C=2*pi*r;
	cout<<"Circumference = "<<C;
	return 0;
}

