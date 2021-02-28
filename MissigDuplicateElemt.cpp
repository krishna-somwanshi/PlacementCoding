#include<iostream>

using namespace std;

int main()
{
	int size = 4;
	int arr [ size ] = {1, 3, 3, 3};
	int i = 0;
	for (i = 0 ; i < size ; i++)
	{
		if( arr [ i ] != (i+1) )
		{
			cout<<(i+1)<<" ";
		}
	}
}
