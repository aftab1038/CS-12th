/*  Data Types and their Sizes..... */

#include <iostream>

using namespace std;

int main(){
    cout<<"Size of Integer : "<<sizeof(int) <<" Bytes \n" 
        <<"Size of Character : "<<sizeof(char)<<" Bytes \n"
	    <<"Size of String : "<<sizeof(string)<<" Bytes \n"
        <<"Size of Boolen : "<<sizeof(bool)<<" Bytes \n"
        <<"Size of Floating Point : "<<sizeof(float)<<" Bytes \n"
        <<"Size of Double Floating Point : "<<sizeof(double)<<" Bytes \n"
        <<"Size of Wide Character : "<<sizeof(wchar_t)<<" Bytes \n";
        
    return 0;
}
