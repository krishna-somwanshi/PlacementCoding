//25. Program to show sum of 10 elements of array & show the average.

#include<iostream>

using namespace std;

int main()
{
	int sum,i;
	int arr [ 10 ] = {10,16,86,31,64,97,9,46,64,95};
	
	for(i=0;i<10;i++)
	{
		sum = sum + arr[ i ];
	}

	cout<<"Sum = "<<sum<<endl;
	
	cout<<"Average = "<<(sum/10);
	
	return 0;	
}
