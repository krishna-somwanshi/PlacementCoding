#include<iostream>

#include<math.h>

using namespace std;

//Binary number = 1010
//put at it's unit digit  =  1 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0

//Add the number			=		8      +    0    +    2    +     0     
							
//Decimal number			=      10


int main()
{
	int binary [ ] = {1,1,1,1,1,1,1,1,1,1};
	int size = 10;
	int i = 0;
	int mul = 0;
	int decimal = 0;
	int k = 0;
	
	for(i = size-1 ; i >= 0 ; i--)
	{
		mul = binary[i] * pow(2,k);
		k++;
		decimal = decimal + mul;
	}
	
	cout << decimal;
	
//	int binary = 1110;
//	int decimal = 0;
//	int multtemp = 0;
//	int rem;
//	int k;
//	int i;
//	
//	for(i=0;i<4;i++)
//	{
//		rem = binary % 10 ;
//		binary = binary / 10;
//		multtemp = rem * pow(2,k);
//		k++;
//		decimal = decimal + multtemp;
//	}
//	cout<<"DECIMAL = "<<decimal;
	return 0;
}
