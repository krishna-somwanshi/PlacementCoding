//27. Program to display matrix.

#include<iostream>

using namespace std;

	int matrix[3][3];
	
int main()
{
	cout<<"Enter matrix Element"<<endl;
	for(int x=0;x<3;x++)
	{
		for(int y=0;y<3;y++)
		{
			cin>>matrix[x][y];
		}
	}
	
	for(int x=0;x<3;x++)
	{
		for(int y=0;y<3;y++)
		{
			cout<<"matrix ["<<x<<"]["<<y<<"] = "<<matrix[x][y]<<endl;
		}
		cout<<"\n";
	}
	
	return 0;	
}
