#include<iostream>

using namespace std;

static int b;

int main()
{
	

//cout<<"\n \n \n \n \n \n \n \n \n \n \n \n";
    int arr [ 7 ] = { 1, 2, 3, 4, 4, 7, 7};
    for (int i = 0 ; i < 7 ; i++ )
    {
            b++;
        if( arr[ i ] != b )
        {
            cout << b<<" ";   
        }
    }
    
    return 0;
}
