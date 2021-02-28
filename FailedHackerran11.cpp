#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int AllOccupied(char arr[7][5]){ 
    int count=0;
    for(int i=0;i<7;i++){
        for(int j=1;j<5;j++)
        if(arr[i][j]=='X')
            count++;
    }

    if(count==28)
        return 1;
    return 0;
}

void display(char arr[7][5]){ 
    for(int i=0;i<7;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return;
}

string getData(){ 
    string p;
    //cout<<"enter valid seat no to check(like 1B) or N to end: ";
    p="2B";
    return p;
}

void update(char arr[7][5],int row,int col){ 
    //cout<<"congrats, your seat is valid. Reserved for you\n";
    //cout<<"updated seat status..........\n";
    arr[row][col]='X';
}

int check(char arr[7][5],string s){ 
if(s[0]>'7' || s[0]<'1' || s[1]>'D' || s[1]<'A'){ 
cout<<"invalid seat no\n"; 
return 0;
}

int row=-1,col=-1;

for(int i=0;i<7;i++){
if(arr[i][0]==s[0])
row=i;
}
 
for(int j=0;j<5;j++){
if(arr[row][j]==s[1])
col=j;
}

if(col==-1){
cout<<"Seat is already occupied\n";
return 0;
}
else{
update(arr,row,col);   
}
return 1;
} 


void airline(char arr[7][5]){
    //cout<<"enter N if you are done!\n"; 
    string s = "2B";
    //while(true){ 
        //s=getData();
    //s="2B";
        if(s[0]=='N')
        {
            exit(0);
            //break; 
        }

        if(check(arr,s)) 
        {
            display(arr);
        }

//if(AllOccupied(arr))
  //      {
            //cout<<"Sorry, no more seats left!!"<<endl;
            //break;
    //    }
        
    //}
    //cout<<"Thanks, that's all"<<endl;
}

int main()
{
    char arr[7][5]; 
    for(int i=0;i<7;i++){
        arr[i][0]=i+1+'0';
        for(int j=1;j<5;j++){
            arr[i][j]='A'+j-1; 
        }
    }
    
    //cout<<"initial seat arrangements........\n";
    //display(arr);
    airline(arr); 

    return 0;
}
