#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string name1 [ 5 ] = {"bumrah","rahane","rahul","vijay","virat"};
    
    
    
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(name1 [ i ] > name1 [ j ])
            {
                string temp = name1 [ i ];
                name1 [ i ] = name1 [ j ];
                name1 [ j ] = temp;
            }
        }
    }
    
    
    for(int i=0;i<5;i++)
    {
            cout<<"    "<<name1[i]<<"\n";
    }
    
    string name2 [ 10 ] = {"rahul","virat","vijay","bumrah","rahane","rahul","virat","vijay","bumrah","rahane"};
    
    
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(name2 [ i ] > name2 [ j ])
            {
                string temp = name2 [ i ];
                name2 [ i ] = name2 [ j ];
                name2 [ j ] = temp;
            }
        }
    }
    
    
    for(int i=0;i<10;i++)
    {
            cout<<"    "<<name2[i]<<"\n";
    }
    
    
     string name3 [ 15 ] = {"rahul","virat","vijay","bumrah","rahane","rahul","virat","vijay","bumrah","rahane","rahul","virat","vijay","bumrah","rahane"};
    
    
    for(int i=0;i<15;i++)
    {
        for(int j=i+1;j<15;j++)
        {
            if(name3 [ i ] > name3 [ j ])
            {
                string temp = name3[ i ];
                name3 [ i ] = name3[ j ];
                name3 [ j ] = temp;
            }
        }
    }
    
    
    for(int i=0;i<15;i++)
    {
            cout<<"    "<<name3[i]<<"\n";
    }
    
    return 0;
}
