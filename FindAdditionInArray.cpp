
1st method


//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int arr[] = {2,4,5,6,7,9};
//	int size = sizeof(arr)/sizeof(int);
//	int z = 10; 
//	int flag = 0;
//	
//	for(int i=0;i<size-1;i++)
//	{
//		for(int j=i+1;j<size;j++)
//		{
//			if( z == (arr[i]+arr[j]))
//			{
//				cout<<"x = "<<arr[i]<<" y = "<<arr[j]<<endl;
//				flag = 1;
//				break;
//			}
//		}
//	}
//	
//	if(flag == 0)
//	{
//		cout<<"Does not exit";//<<count;
//	}
//	return 0;
//}



2nd method




#include<iostream>

using namespace std;

int main()
{
	int arr[] = {2,4,5,6,7,9};
	int size = sizeof(arr)/sizeof(int);
	int z = 10; 
	int flag = 0;
	
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if( z == (arr[i]+arr[j]))
			{
				cout<<"x = "<<arr[i]<<" y = "<<arr[j]<<endl;
				flag = 1;
				break;
			}
		}
	}
	
	if(flag == 0)
	{
		cout<<"Does not exit";//<<count;
	}
	return 0;
}
