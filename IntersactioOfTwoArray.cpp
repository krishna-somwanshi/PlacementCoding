#include<iostream>

using namespace std;

int  main()
{
	int arr1[] = {20,34,13,6,10,56,45,23};
	int arr2[] = {1,20,13,34,5,6,7,89};
	
	int s1 = sizeof(arr1)/sizeof(int);
	int s2 = sizeof(arr2)/sizeof(int);
	
	int outputsize;
	
	if(s1 > s2)
		{
			outputsize = s1;
		}
	else
		{
			outputsize = s2;
		}
		
		int output[outputsize];
		int outputindex = 0;
		
		for(int i=0;i<s1;i++){
			for(int j=0;j<s2;j++){
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
