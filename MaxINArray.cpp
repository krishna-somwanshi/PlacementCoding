//26. Program to find the maximum no in an array.

#include<iostream>

using namespace std;

int main()
{
	int i,max;
	int arr [ 10 ] = {10,16,86,31,64,97,9,46,64,95};
	
	arr[ 0 ] = max;
	
	for(i=1;i<10;i++)
	{
		if(arr[i] > max)
		{
			max=arr[i];
		}
	}
	
	cout<<"Maximum Value = "<<max;
	return 0;	
}
