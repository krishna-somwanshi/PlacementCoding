#include<iostream>

using namespace std;

int main()
{
	int size = 3;
	
	int i,j,temp;
	int count = 0;
//	int villain [ size ] = { 112, 243, 512, 343, 90, 478};
//	int hero [ size ] = { 789, 500, 452, 400, 243, 150};
	int villain [ size ] = {100,200,300};
	int hero [ size ] = {200,300,400};
	for ( i = 0 ; i < size ; i++ )
	{
		for ( j = (i+1) ; j < size ; j++ )
		{
			if ( villain [ j ] < villain [ i ] )
			{
				temp = villain [ j ];
				villain [ j ] = villain [ i ];
				villain [ i ] = temp;
			}
			
			if ( hero [ j ] > hero [ i ] )
			{
				temp = hero [ j ];
				hero [ j ] = hero [ i ];
				hero [ i ] = temp;
			}

		}
	}
	
	for(int i = 0 ; i < 6 ; i++ )
	{
			if ( hero [ i ] > villain [ i ]) 
			{
				count++;							//if hero win count will increase by one.
			}
			else
			{
				count--;							//if villain lose count will decrease by one.
			}
	}
	
	if( count == size )								//if count equal to size off array all hero win. 
	{
		cout<<"Win";
	} 
	else
	{
		cout<<"Lose";
	}
	return 0;
}


//	cout<<"} \n \n";
//	cout<<"vill [ size ] = { ";
//	for ( i = 0 ; i < size ; i++ )
//	{
//		cout<<villain[i]<<" ";
//	}
//	cout<<"} \nhero [ size ] = { ";
//	for ( i = 0 ; i < size ; i++ )
//	{
//		cout<<hero[i]<<" ";
//	}	
