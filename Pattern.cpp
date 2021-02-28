
///////////////////////////////////////////////////////
//*********************pattern first******************
//////////////////////////////////////////////////////

//5

//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	for(int i=1;i<=n;i++)
//	{
//			for(int j=1;j<=i;j++)
//			{
//				cout<<j<<" ";
//			}
//			cout<<endl;
//	}
//	
//	
//	return 0;
//}



///////////////////////////////////////////////////////
//*********************pattern second******************
//////////////////////////////////////////////////////

//5

//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	for(int i=1;i<=n;i++)
//	{
//			for(int j=1;j<=i;j++)
//			{
//				cout<<i<<" ";
//			}
//			cout<<endl;
//	}
//	
//	
//	return 0;
//}






///////////////////////////////////////////////////////
//*********************pattern third******************
//////////////////////////////////////////////////////


//5

//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	for(int i=1;i<=n;i++)
//	{
//			for(int j=i; j>=1 ;j--)
//			{
//				cout<<j<<" ";
//			}
//			cout<<endl;
//	}
//	
//	return 0;
//}



///////////////////////////////////////////////////////
//*********************pattern fourth******************
//////////////////////////////////////////////////////


//5


//        1
//      3 3 3
//    5 5 5 5 5
//  7 7 7 7 7 7 7
//9 9 9 9 9 9 9 9 9


//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	for(int i=1;i<=2*n;i+=2)
//	{
//			for(int j=((2*n)-2);j>=i;j--)
//			{
//				cout<<" ";
//			}	
//			for(int j=1; j<=i ;j++)
//			{
//				cout<<i<<" ";
//			}
//			cout<<endl;
//	}
//	
//	return 0;
//}



///////////////////////////////////////////////////////
//*********************pattern Fifth******************
//////////////////////////////////////////////////////

//5


//        A
//      A B C
//    A B C D E
//  A B C D E F G
//A B C D E F G H I



//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	int k=1;
//	char carray[] = "ABCDEFGHIKJLMNOPQRSTUVWXYZ";
//	
//	for(char i=1;i<=2*n;i+=2,k++)
//	{
//		for(int j=0;j<2*(n-k);j++)
//			{
//				cout<<" ";
//			}	
//		for(int j=1; j<=i ;j++)
//			{
//				cout<<carray[j-1]<<" ";
//			}
//			cout<<endl;
//	}
//	
//	return 0;
//}


//Patterns 1 
// 
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
//	
//	return 0;
//}















//Patterns 2

//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5




//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			cout<<i<<" ";
//		}
//		cout<<endl;
//	}
//	
//	return 0;
//}



//Patterns 3

//1
//2 1
//3 2 1
//4 3 2 1
//5 4 3 2 1

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=i;j>=1;j--)
//		{
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
//	
//	return 0;
//}


//Patterns 4

//		1
//      3 3 3
//    5 5 5 5 5
//  7 7 7 7 7 7 7
//9 9 9 9 9 9 9 9 9

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=2*n;i+=2)
//	{
//		for(int j=((2*n)-2);j>=i;j--)
//		{
//			cout<<" ";
//		}
//		for(int j=1;j<=i;j++)
//		{
//			cout<<i<<" ";
//		}
//		cout<<endl;
//	}
//	
//	return 0;
//}



//Patterns 5

//        A
//      B B B
//    C C C C C
//  D D D D D D D
//E E E E E E E E E



//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	char carr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	for(int i=1;i<=2*n;i+=2)
//	{
//		for(int j=((2*n)-2);j>=i;j--)
//		{
//			cout<<" ";
//		}
//		for(int j=0;j<i;j++)
//		{
//			cout<<carr[j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//	return 0;
//}
