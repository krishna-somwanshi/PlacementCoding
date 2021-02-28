//2. Program to find the simple interest.
//   simple_interest = (p * t * r) / 100
#include<iostream>

using namespace std;

int main()
{
	int p,t,r,SI;
	cout<<"Enter priniple amount"<<endl;
	cin>>p;
	cout<<"Enter time period"<<endl;
	cin>>t;
	cout<<"Enter rate of interest"<<endl;
	cin>>r;
	
	SI=((p*t*r)/100);
	cout<<"Simple Interest = "<<SI;
	
	return 0;
}

