#include<iostream>

using namespace std;

int main()
{
	int size = 6;
	int arr[ size ] = {4,5,2,3,6,9};
	int z = 5;
	
	for(int i=0;i<6;i++)
		for(int j=i+1;j<6;j++)	
			if(arr[i] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
	
	int i,j;
	i=0;
	j=size-1;

		while(i < j)
		{
			int sum = (arr [ i ] + arr[ j ]);
			if(sum == z)
			{
				cout<<"X,Y are found"<<endl;
				cout<<arr[i]<<" "<<arr[j]<<endl;
				return 0;
			}
			else if(sum < z)
			{
				i++;
			}
			else if(sum > z)
			{
				j++;
			}
		}
	cout<<"Does Not Exist"<<endl;
	return 0;
}
