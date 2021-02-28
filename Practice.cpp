
/////////////////////////////////////////////////////      Binary to Decimal          //////////////////////////////////////////////////////

//#include<iostream>
//#include<math.h>
//using namespace std;
//
////binary 1010
////
////DEcimal = 1 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0
////			8	+	0		+	2	+	0
//
//int main()
//{
//	int binary[ ] = {1,1,1,1,1,1,1,1,1,1,1,1,1};
//	int size = 13;
//	int rem=0;
//	int k=0;
//	int i = 0 ;
//	int muldec = 0 ;
//	int decimal = 0;
//for(i = size-1 ; i >= 0 ; i--)
//{
//	rem = binary[i] % 2	;
//	muldec = rem * pow(2,k);
//	k++;
//	decimal = decimal + muldec;
//}	
//	cout<<"Decimal ="<<decimal;
//	return 0;
//}



////////////////////////////////////////////////////      DECIMAL TO  Binary  ///////////////////////////////////////////////////////////////


//Decimal = 10
//
//unit number		Remender		number
//10			   10 % 2 = 0		10 / 2 = 5	
//5				5 % 2 = 1       5 / 2 = 2
//2				2 % 2 = 0		2 / 2 = 0
//0				0 % 2 = 0		0 	
//
//
//
//binary =  1010

////////////////////////////////////////////////////    UpperCase To LowerCase    ////////////////////////////////////////////////////////////

//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//char string[ ] = "KrIshNA";
//
//for(int i=0 ; string [ i ] != '\0' ; i++ )
//{
//	if( string [ i ] >= 65 && string [ i ] <= 90 )
//	{
//		string [ i ] = string [ i ] + 32;
//	}
//}
//	
//	for(int i=0 ; string [ i ] != '\0'; i ++)
//	{
//		cout<<string[i];
//	}
//	
//	return 0;
//}
////////////////////////////////////////////         Second Max          ////////////////////////////////////////////////////////////////////

//
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int arr[] = {10,652,25,31,6528,64,100,10};
//	int size = 8;
//	int max = arr [ 0 ];
//	int secondmax = arr [ 1 ];
//	int i;
//	if( secondmax > max )
//	{
//		max = secondmax;
//	}
//	for( i = 2 ; i < size-1 ; i++ )
//	{
//		if( arr [ i ] > max )
//		{
//			secondmax = max;
//			max = arr [ i ];
//		}
//	}
//	
//	for(i = 0 ; i < size-1; i++)
//	{
//		cout<< arr [ i ] << "\t " ;
//	}
//	cout<<endl;
//	cout<<"MAX = "<<max<<endl;
//	cout<<"Second MAx = "<<secondmax<<endl;
//	
//	return 0;
//}


////////////////////////////////////////////////////     Vovels in the string        /////////////////////////////////////////////////////////


//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	char str [ ] = "hello krishna";
//	char str1 [ ] ;
//	int count = 0;
//	for(int i=0 ; str[ i ] != '\0' ; i++)
//	{
//		if(str [ i ] == 'a' || str [ i ] == 'e' ||str [ i ] == 'i' ||str [ i ] == 'o' ||str [ i ] == 'u' )
//		{
//			count++;
//		}
//	}	
//	
//	cout<<count;
//	
//	return 0;
//}


#include<iostream>

using namespace std;

int main()
{
	int count ;
	int i;
	int ch;
	char str [ ] = "Hello krishna somwanashi";
	for ( i = 0 ; str [ i ] != '\0' ; i++)
	{
		ch = str [ i ];
		switch( ch )
		{
		case ( 'a' ):
		case ( 'e' ):
		case ( 'i' ):
		case ( 'o' ):
		case ( 'u' ):
		count++;
		}
	}
	
	cout<<count;
	return 0;
}
