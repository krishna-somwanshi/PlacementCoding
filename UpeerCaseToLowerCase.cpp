//////////////write a code to convert upper case letter to lowercase letter

#include<iostream>

using namespace std;

int main()
{
	char string [ ] = "hELlO kRisHna" ;
	
	for(int i=0; string[i] != '\0' ;i++)
	{
		if(string[i] >= 65 && string[i] <= 92 )
		{
			string[i] = string[i] + 32;
		} 
	}
	cout<<string;	
	return 0;
}
