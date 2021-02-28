//18. Program to print Fibonacci series up to 100.

#include <iostream>


using namespace std;

int main()
{
	int i,t1=0,t2=1,n,nextterm = 0;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i == 1)
		{
			cout<<" "<<t1;
			continue;
		}
		if(i == 2)
		{
			cout<<t2<<" ";
			continue;
		}
		nextterm = t1+t2;
		t1 = t2;
		t2 = nextterm;
		
		cout<<nextterm<<" ";
	}
	
return 0;
}	
