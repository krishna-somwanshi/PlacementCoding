//12. Program to shift inputed data by two bits to the left.
//	samle input = 5
//	binary 		= 0101
//	left shift	= 010100 (16+4)
//	left shift 	= 20

#include<iostream>

using namespace std;

int main()
{
	int input;// =10653;
	cout<<"Enter the integer"<<endl;
	cin>>input;
	input<<=2;
	cout<<"input = "<<input<<endl;
	
	return 0;
}

