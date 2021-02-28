#include<iostream>
using namespace std;

int main()
{
	char arr[] = "DDUDUDUUUDDU";
	//char arr[] = "UUUUUU";
	long long int size = sizeof( arr) / sizeof(arr [ 0 ]);
	
	long long int hold = 0;
	long long int valley = 0;
	
	for(long long int i=0;i<size;i++)
	{
		if(arr [ i ] == 85)
			hold++;
		else 
			hold--;
			
		if(hold == 0  && arr[ i ] == 85)
			valley++;		
			
	}
	cout<<valley; 
	return 0;
}

//int main(){
//	char carr[] = "DUDUDDUU";
//	int n = sizeof(carr) / sizeof(char);
//	int steps = 0;
//	int valleyCounter = 0;
//	for(int i=0;i<n;i++){
//		if(carr[i] == 'U')
//			steps++;
//		else if(carr[i] == 'D')
//			steps--;
//		if(steps == 0 && carr[i] == 'U')
//			valleyCounter++;
//	}
//	cout<<valleyCounter;
//	return 0;
//}

