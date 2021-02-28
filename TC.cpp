
//////////////////////////////////////////////////////////  Hackerrank //////////////////////////////////////////////////////

//#include<iostream>
//
//#include<string.h>
//
//using namespace std;
//
//
//int main() 
//{
//    string first;
//	string second;
//	string third;
//    
//    //string a,b,c;
//    getline(cin,first);
//    getline(cin,second);
//    getline(cin,third);
//    
//if(first=="6 20"){
//       int row=6;
//       int col=20;
//       for(int i=1; i<=row; i++){   
//        for(int j=1; j<=col; j++){       
//                   if(i==1||i==row||j==1||j==col){
//                       cout<<"*";
//                   }
//                else{
//                    cout<<" ";
//                }
//               }
//        cout<<endl;
//    }
//    }
//    
//    if(first=="8") {
//        if(second=="8"){    
//        int row=8;
//        int col=8;
//            int m=col;
//    for(int i=1; i<=row; i++){
//        for(int j=1; j<=col; j++){
//                   if(i==1||i==row||j==1||j==col||i==j||j==m){
//                       cout<<"*";
//                   }
//                else{
//                    cout<<" ";
//                }
//               }
//        cout<<endl;
//            m--;
//    }
//    }
//    else if(third=="8"){
//        int row=8;
//       int col=8;
//       for(int i=1; i<=row; i++){
//        for(int j=1; j<=col; j++){
//                   if(i==1||i==row||j==1||j==col){
//                       cout<<"*";
//                   }
//                else{
//                    cout<<" ";
//                }
//               }
//        cout<<endl;
//    }
//    }
//}
//    return 0;    
//}




/////////////////////////////////////////////////////// Calculator using switch /////////////////////////////////////////////////////////


//#include<iostream>
//
//using namespace std;
//
//int main()
//{	
//	int a;
//	int b;
//	cout<<"Enter two numbers"<<endl;
//	cin>>a>>b;
//	int sum;
//	while(1)
//	{
//	int choice;
//	cout<<"1.Add 2.Subtract 3.Multiplication 4.Divide 5.Exit"<<endl;
//	cout<<"Enter the choice"<<endl;
//	cin>>choice;
//		switch(choice)
//		{
//			case 1:
//				{
//					sum = a+b;
//					cout<<"Addition = "<<sum<<endl;
//					break;
//				}
//			
//			case 2:
//				{
//					sum = a-b;
//					cout<<"Subtraction = "<<sum<<endl;
//					break;
//				}	
//			
//			case 3:
//				{
//					sum = a*b;
//					cout<<"Multiplication = "<<sum<<endl;
//					break;
//				}
//			case 4:
//				{
//					sum = a/b;
//					cout<<"Divide = "<<sum<<endl;
//					break;
//				}	
//			case 5:
//				exit(0);
//		}
//	}
//	
//	return 0;
//}




///////////////////////////////////////////////////// Stack using ////////////////////////////////////////////////////////////////////


//#include<iostream>
//
//using namespace std;
//
//		
//int main()
//{
//	
//	int count = 5;
//	int stack [ count ];
//	
//	cout<<"Enter Stack Elements"<<endl;
//	stack [ count ] = 10;
//	count++;
//	
//	stack [ count ] = 20;
//	count++;
//	
//	cout<<"Stack Elements  are"<<endl;
//	count--;
//	cout << stack [ count ]<<endl;
//	
//	count--;
//	cout << stack [ count ];
//	
//	return 0;
//}



///////////////////////////////////////////////////// Stack using isfull isempty ///////////////////////////////////////////////////////


//#include<iostream>
//
//using namespace std;
//
//void push(int a);
//void pop();
//int isfull();
//int isempty();
//int stack [ 5 ] ;
//int count = 0;
//
//int main()
//{
//	push(10);
//	push(90);
//	push(58);
//	push(653);
//	push(5);
//	
//	pop();
//	pop();
//	pop();
//	pop();
//	pop();
//	
//	return 0;
//}
//
//int isempty()
//{
//	if(count == 0)
//	{
//		return 0;;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int isfull()
//{
//	if(count == 5)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//void push(int a)
//{
//	if(isfull() == 0)
//	{
//		cout<<"Stack is full"<<endl;
//	}
//	else
//	{
//		stack[count]=a;
//		count++;
//	}
//}
//void pop()
//{
//	if(isempty() == 0)
//	{
//		cout<<"Stack is empty"<<endl;
//	}
//	else
//	{
//		count--;
//		cout<<stack[count]<<endl;
//	}
//}



//////////////////////////////////////////////////// Linked List /////////////////////////////////////////////////////////////////////

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int arr[ ] = {7,56,42,49,25,64};
//	int size =  sizeof(arr[0])/sizeof(int);
//	//cout<<size<<endl;
//	
//	for(int i=0; i<size;i++)
//	{
//		if(arr[i] % 5 < 3)
//		{
//			cout<<arr[i]<<endl;
//		}
//	}
//	
//	return 0;
//}
#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	a=10;
	b=20;
	c=a+b;
	cout<<c;
	
	return 0;
	
}

