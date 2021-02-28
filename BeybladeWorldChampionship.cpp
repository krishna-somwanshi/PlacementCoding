
//	3 6 7 5 3 5 6 2 9 1 
//	2 7 0 9 3 6 0 6 2 6 

//  1 2 3 3 5 5 6 6 7 9
//	0 0 2 2 3 6 6 6 7 9


//	1-0	2-0	3-2 3-2 5-3 7-6 9-6 
//	7


#include<iostream>

using namespace std;

int main()
{
	int t;
	cout<<"Enter the test cases"<<endl;
	cin>>t;
	do{
		int size;
		cout<<"enter the size"<<endl;
		cin>>size;
		cout<<"enter the arr1"<<endl;
		int H [ size ];		//={3,6,7,5,3,5,6,2,9,1};
	
		for(int i=0;i<size;i++)
		{
			cin>> H [ i ];
		}
		
		cout<<"enter the arr2"<<endl;
		int V [ size ];		//= {2,7,0,9,3,6,0,6,2,6};
		
		for(int i=0;i<size;i++)
		{
			cin>> V [ i ];
		}
		
//		cout<<"\n the arr1"<<endl;
//		for(int i=0;i<size;i++)
//		{
//			cout<<H[i]<<" ";
//		}
//		
//		cout<<"\n the arr2"<<endl;
//		for(int i=0;i<size;i++)
//		{
//			cout<<V[i]<<" ";
//		}	
		
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if( H[i] > H[j])
			{
				int temp = H[i];
				H[i] = H[j];
				H[j] = temp;
			}
			
			if( V[i] > V[j])
			{
				int temp = V[i];
				V[i] = V[j];
				V[j] = temp;
			}
		}
	}
	
//		cout<<"\n the arr1"<<endl;
//		for(int i=0;i<size;i++)
//		{
//			cout<<H[i]<<" ";
//		}
//		
//		cout<<"\n the arr2"<<endl;
//		for(int i=0;i<size;i++)
//		{
//			cout<<V[i]<<" ";
//		}	

//  1 2 3 3 5 5 6 6 7 9
//	0 0 2 2 3 6 6 6 7 9

	//static int i=0;
	static int j=0;
	static int count=0;
	
		for(int i=0;i<size;i++)
		if(H[i] > V[j])
		{
			count++;
			j++;
		}
		
		cout<<endl<<count;
		t--;
	}
		while(t);
		
		
	return 0;
}
