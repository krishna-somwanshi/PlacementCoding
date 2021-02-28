#include<iostream>

using namespace std;

int  main()
{
	int arr1[] = {2,4,3,6,10,56,45,23};
	int arr2[] = {1,2,3,4,5,6,7,89};
	
	int n1 = sizeof(arr1)/sizeof(int);
	int n2 = sizeof(arr2)/sizeof(int);
	
	int outputsize;
	
	if(n1 > n2)
		{
			outputsize = n1;
		}
	else
		{
			outputsize = n2;
		}
		
		int output[outputsize];
		int outputindex = 0;
		
		for(int i=0;i<n1;i++){
			for(int j=0;j<n2;j++){
				if(arr1[i] == arr2[j])
				{
					output[outputindex] = arr1[i];
					outputindex++;
					break;
				}
			}
		}
	
	for(int i=0;i<outputindex;i++)
	{
		cout<<output[i]<<" ";
	}
	return 0;
}
