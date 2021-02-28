// Write a program to solve the quadratic equation, ax2 + bx + c - 0. 
// Consider all possibilities for input data.


//#include <math.h>
//#include <stdio.h>
//int main() {
//    double a, b, c, discriminant, root1, root2, realPart, imagPart;
//    printf("Enter coefficients a, b and c: ");
//    scanf("%lf %lf %lf", &a, &b, &c);
//
//    discriminant = b * b - 4 * a * c;
//
//    // condition for real and different roots
//    if (discriminant > 0) {
//        root1 = (-b + sqrt(discriminant)) / (2 * a);
//        root2 = (-b - sqrt(discriminant)) / (2 * a);
//        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
//    }
//
//    // condition for real and equal roots
//    else if (discriminant == 0) {
//        root1 = root2 = -b / (2 * a);
//        printf("root1 = root2 = %.2lf;", root1);
//    }
//
//    // if roots are not real
//    else {
//        realPart = -b / (2 * a);
//        imagPart = sqrt(-discriminant) / (2 * a);
//        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
//    }
//
//    return 0;
//}





//Suppose Rs.5,000/- is deposited each year in an account which yields 10% interest compounded annually.
//Write a program which prints the amount in the account at the end of each year for 10 years.

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int amount = 5000;
//	int interest = 10;
//	int period = 1;
//	int result;
//	
//	for(int i=1; i<=10; i++)
//	{
//		result =  amount * period / interest;
//		amount = result + amount + 5000;
//		cout<<result<<endl;
//	}
//	return 0;
//}


// Write a program to display even or odd words for the input of integer number using library functions. 
// Also, draw the flowchart for the same.

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	
//	string arr = "I Am Krishna Bharat Somwanshi";
//	
//	int count = 0;
//	int size = sizeof(arr)/sizeof(string);
//	
//	for(int i=0; i<size; i++)
//	{
//			if(arr[i] != " ")
//			{
//				count++
//			}
//			cout<<count;
//			count = 0;
//	}
//	
//	
//	return 0;
//}

//	Write a program, which will read two unequal integer numbers and shall print 
//	out both the numbers at the output in descending order.

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int val;
//	cout<<"How many times"<<endl;
//	cin>>val;
//	
//	do
//	{
//		
//		int n1,n2;
//		cout<<"\nsEnter two numbers"<<endl;
//		cin>>n1>>n2;
//		cout<<"\nOutput In Descending Order"<<endl;
//		if(n1 > n2)
//			{
//				cout<<n1<<endl;
//				cout<<n2<<endl;
//			}
//		else if(n1 < n2)
//			{
//				cout<<n2<<endl;
//				cout<<n1<<endl;
//			}
//	}while(--val);
//
//   return 0;
//}


//Write a program, which will read three unequal numbers and shall output the largest of the three.

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//		int n1,n2,n3;
//		cout<<"\nEnter two numbers"<<endl;
//		cin>>n1>>n2>>n3;
//		
//		int max = (n1>n2 ? n1 : n2);
//		//cout<<"N1 = "<<max<<endl;
//		
//		int max1 = n3>max ? n3 : max;
//		cout<<"Largest Of Three = "<<max1<<endl;
//return 0;
//}
//

//	Write a program, which will read three unequal integers and shall output all the three integers in decreasing order.


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a1,a2,a3;
//	cout<<"Enter three Elements"<<endl;
//	int arr[3];
//	
//	for(int i=0; i<3; i++)
//	{	
//		cin>>arr[i];
//	}
//	
//	for(int i=0; i<3; i++)
//	{
//		for(int j=0; j<3; j++)
//		{
//			if(arr[i] > arr[j])
//			{
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	
//	
//	cout<<"decreasing order"<<endl;
//	for(int i=0; i<3; i++)
//	{
//		cout<<arr[i]<<endl;
//	}
//		
//	return 0;
//}


//  	Develop a program to accept a year as input and printif it is a leap year or not.
// 		A year is a leap year if it is divisible by 4 and centennial years
// 		(years divisible by 100 are leap years only when they are also divisible by 400.)

//#include<iostream>
//using namespace std;
//int main()
//{
//	int year;
//	cin>>year;
//	
//	if(year / 4 == 0)
//		{
//			cout<<"Leap Year"<<endl;
//		}
//		else
//		{
//			if(year %1 100 == 0)
//			{
//				if(year % 400 == 0)
//				{
//					cout<<"Leap Year"<<endl;
//				}
//				else
//				{
//					cout<<"Not Leap Year"<<endl;
//				}
//			}
//			else
//			{
//			cout<<"Not Leap Year"<<endl;
//			}
//		}
//	return 0;
//}


//a program to display month in words (input:month number).

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int choice;
//	cin>>choice;
//	
//	switch(choice)
//	{
//		case 1:
//			cout<<"January"<<endl;
//			break;
//			
//		case 2:
//			cout<<"February"<<endl;
//			break;	
//		
//		case 3:
//			cout<<"March"<<endl;
//			break;	
//		
//		case 4:
//			cout<<"April"<<endl;
//			break;
//		
//		case 5:
//			cout<<"May"<<endl;
//			break;
//		
//		case 6:
//			cout<<"June"<<endl;
//			break;
//		
//		case 7:
//			cout<<"July"<<endl;
//			break;	
//		
//		case 8:
//			cout<<"August"<<endl;
//			break;	
//		
//		case 9:
//			cout<<"September"<<endl;
//			break;	
//		
//		case 10:
//			cout<<"October"<<endl;
//			break;	
//		
//		case 11:
//			cout<<"November"<<endl;
//			break;
//			
//		case 12:
//			cout<<"December"<<endl;
//			break;
//			
//		default:
//			cout<<"Enter A Valid Input"<<endl;			
//	}
//}


//	9.	Write a menu driven program to perform the trigonometric functional calculator for the following functions. 
//		s - sin (x)			c - cos (x)
//		t - tan (x)			x - quit

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main()
//{
//	float val;
//	cout<<"Enter the value"<<endl;
//	cin>>val;
//	
//	int choice;
//	float hold;
//	cout<<"Select Option to perform operation"<<endl;
//	cout<<"1.s - sin (x)	2.c - cos (x)	 3.t - tan (x)		4.x - quit"<<endl;
//	cin>>choice;
//	switch(choice)
//	{
//		case 1:
//			hold = sin(val);
//			cout<<hold;
//			break;
//			
//		case 2:
//			hold = cos(val);
//			cout<<hold;
//			break;
//			
//		case 3:
//			hold = tan(val);
//			cout<<hold;
//			break;		
//		
//		case 4:
//			return 0;	
//	}
//	
//	return 0;
//}

//A company manufactures three products, namely, music systems, television sets and refrigerators. 
//The following codes are used to indicate them.
//Product		Code
//Music system	1
//Television set	2
//Refrigerator	3
//The company has a discount policy as follows :
//Product		Order amount		Discount rate
//Music system	Rs.15,000 or more	12%
//				Rs.8,000 or more	8%
//				Less than Rs.8,000	2%
//Television set	Rs.70,000 or more	11%
//				Rs.40,000 or more	6%
//Refrigerator	Rs.50,000 or more	10%
//				Rs.30,000 or more	5%
//For a given product, use appropriate control structure. Using this policy, 
//write a program to calculate the discount amount on an order amount. 


#include<iostream>

using namespace std;

int main()
{
	
	int choice;
	cout<<"Entter choice"<<endl;
	cin>>choice;
	
	
	
	
	return 0;
}
