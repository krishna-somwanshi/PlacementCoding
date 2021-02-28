#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size";
	cin>>size;
	int arr [ size ];
	int i,j;
	int count = 0;
	for(i = 0 ; i < size ; i++)
	{
		cin>>arr[ i ];
	} 	
	for( i = 0 ; i < size ; i++)
	{
		for( j = i+1 ; j < size ; j++)
		{
			if( arr [ i ] == arr [ j ])
			{
				//arr[ ] = arr [ i ];
				cout<<"Duplicate elements are at index   arr["<<i<<"] and at   arr["<<j<<"]  Duplicate Elemet is " <<arr [ i ] << endl;
				count++;
				break;
			}
		}
	}
	cout<<endl<<"Total Duplicate Element = "<<count;
	return 0;
}
