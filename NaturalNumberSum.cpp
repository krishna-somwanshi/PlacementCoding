//15. Program to display first 10 natural no & their sum.

#include<iostream>

using namespace std;

int main()
{
	int i,sum;
	cout<<"First ten Natural Numbers are"<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<i<<endl;
		sum = sum+i;
	}
	
	cout<<"Sum Of Numtural numbers = "<<sum<<endl;
	
	return 0;
}
