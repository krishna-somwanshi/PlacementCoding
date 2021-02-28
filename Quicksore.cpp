//#include<iostream>
//using namespace std;
//int partition(int *a,int start,int end)
//{
//    //last element as pivot
//    int pivot=a[end];
//    
//    int P_index=start;
//    int i,t;  
//    for(i=start;i<end;i++)
//    {
//    	if(a[i]<=pivot)
//        {
//            t=a[i];
//            a[i]=a[P_index];
//            a[P_index]=t;
//            P_index++;
//        }
//     }
//      t=a[end];
//      a[end]=a[P_index];
//      a[P_index]=t;
//    
//     return P_index;
// }
// void Quicksort(int *a,int start,int end)
// {
//    if(start<end)
//    {
//         int P_index=partition(a,start,end);
//             Quicksort(a,start,P_index-1);
//             Quicksort(a,P_index+1,end);
//    }
//}
//int main()
//{
//    int n;
//        cout<<"Enter number of elements: ";
//        cin>>n;
//        int a[n];
//        cout<<"Enter the array elements:\n";
//        for(int i=0;i<n;i++)
//       {
//    	 cin>>a[i];
//       }
//      Quicksort(a,0,n-1);
//      cout<<"After Quick Sort the array is:\n";
//      for(int i=0;i<n;i++)
//      {
//    	 cout<<a[i]<<" ";
//      }
//    return 0;
//}


#include<iostream>

using namespace std;

//int partition(int *arr,int start,int end)
//{
//	int pivot = arr [ end ];
//	
//	int p_index = start;
//	int i,t;
//	for( i = start ; i < end ; i++ )
//	{
//		if( arr [ i ] <= pivot )
//		{
//			t = arr [ i ];
//			arr [ i ] = arr [ p_index ];
//			arr [ p_index ] = t;
//			p_index++;
//		}
//	}
//		t = arr [ end ];
//		arr [ end ] = arr [ p_index ];
//		arr [ p_index ] = t;
//		
//		return p_index;
//}
int partition (int *a, int start, int end)
{
	int pivot = a [ end ];
	
	int p_index = start;
	int i,t;
	
	for( i = start ; i < end ; i++ )
	{
		if( a [ i ] <= pivot ) 
		{	
			t = a [ i ];
			a [ i ] = a [ p_index ];
			a [ p_index ] = t;
			p_index++;
		}
	}
	
	t = a [ end ];
	a [ end ] = a [ p_index ];
	a [ p_index ] = t;
	
	return p_index;
	
}




void Quicksort(int *a,int start,int end)
{
	if(start < end)
	{
		int p_index = partition(a,start,end);
		Quicksort(a,start,p_index-1);
		Quicksort(a,p_index+1,end);
	}
}

int main()
{
	int n ;
	cout<<"Enter siz eof array"<<endl;
	cin>>n;
	int a [ n ];
	cout<<"Enter array Element"<<endl;
	for(int i = 0 ; i < n ; i ++)
	{
		cin>> a [ i ];
	}
	
	Quicksort(a,0,n-1);
	
	cout<<"\n \n";
	for(int i = 0 ; i < n ; i++ )
	{
		cout << a [ i ]<<" ";
	}
	
	return 0;
}


