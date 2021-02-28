#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	long long int quant[size];
	long long int ingre[size];
	//cout<<"Enter the quant"<<endl;
	//int quant[size] = {22,55,90,50};
	for(int i=0;i<size;i++)
	{
		cin >> quant[ i ];
	}
	for(int i=0;i<size;i++)
	{
		cin >> ingre[ i ];
	}
	//int ingre[size] = {2,5,6,3};
	long long int arr[size];
	for(int i=0;i<size;i++)
	{
		arr[i]=ingre[i]/quant[i];
	}
		int min = arr[0];
		for(int i=1;i<size;i++)
		{
			if(min > arr[i])
			{
				min = arr[i];
			}
		}	
	cout<<min;
	return 0; 
}
