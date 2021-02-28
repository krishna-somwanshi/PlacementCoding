#include<iostream>

using namespace std;

int main()
{
	int n,num=2,val;
	cout<<"Enter last number";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		num = i+1;
		cout<<num<<" ";
		val=val+num;
		i++;
	}
	cout<<"\n"<<val;
	return 0;
}
