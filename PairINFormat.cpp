#include<iostream>

using namespace std;

int main()
{
	char input[]= "00010001001100010";
	for(int i=0;i<17;i++)
	{
		cout<<input[i];
	}
	int i = 0;
	int OutputCounter = 0;
	while( input[i] != '\0')
	{
		cout<<"while( input[i] != '\0')"<<(i++)<<endl;
		if(input[i] == 1)
		{
		cout<<"if(input[i]==1)"<<endl;
			int ZeroCounter = 0;
			i++;
			while(input [ i ] == 0)
			{
				ZeroCounter++;
				i++;
				cout<<"ZeroCounter"<<endl;
			}
			if(ZeroCounter > 0)
			{
				OutputCounter++;
				i++;
				cout<<"if(ZeroCounter > 0)"<<endl;
			}
			else
			{
				cout<<"continue;"<<endl;
				continue;
			}
		}
		else
		{
			i++;
		}
	}
	//cout<<OutputCounter<<endl;
	return 0;
}
