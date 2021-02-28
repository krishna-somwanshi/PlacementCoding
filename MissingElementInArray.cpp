//.. here we are comsidering array is sorted
// if not do sort

#include<iostream>

using namespace std;

int main()
{
	int arr[ ] = { 1, 2, 3, 4, 5, 8, 7, 9, 10 };
	int array_size = 9;
	int e = 0;
	int sumofArray = 0;
	int sumofN = 0;
	for(int i=0 ; i<array_size ;i++	)
	{
		sumofArray = sumofArray + arr [ i ];         						///  49
	}
	array_size++;										
	sumofN = ((array_size + 1) *array_size ) / 2 ;						//	(11*10)/2  = 110/2  =   55
	e = sumofN - sumofArray;       											//	55  -  49  =  6
	cout<<"Missing Element is "<<e;
	
	return 0;
}





//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//    int n = 3;
//    int arr [ n ] = {1, 2, 4};
//    int max = arr [ 0 ];
//    int hold = 0;
//    
//    for(int i = 1 ; i < n ; i++ )
//        {
//            if ( arr [ i ] > max)
//            {
//                max = arr [ i ];
//            }
//        }
//    
//    for (int k = 0 ; k < n ; k++)
//    {
//        hold = hold + max;
//        max--;
//    }
//    	cout<<hold<<endl;
//    
//    return 0;
//}
