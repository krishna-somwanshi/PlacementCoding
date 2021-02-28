#include<iostream>

using namespace std;

int main()
{
    //char input[] = "10101";
    string input = "100101010100011001";
	int i = 0;
	//int n = sizeof(input)/sizeof(char);
	int n = input.length();
	int patternCounter = 0;
	while( i < n){
		if(input[i] == '1'){
			int zeroCounter = 0;
			i++;
			while( i<n && input[i] =='0'){
				zeroCounter++;
				i++;  
			}
			if( i<n && zeroCounter > 0 && input[i] == '1'){
				patternCounter++;
				i++;  //overlap
			}
		}else{
			i++;
		}
	}	
	cout<<patternCounter;
	return 0;
}
