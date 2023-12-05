/*  Functions for I/O Operations.....
        1. getchar()
        2. puts()
        3. gets()       */

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    // getchar() function   
    cout<<"Taking character input using getchar function: ";
    char ch = getchar();                               
    cout<<"Printing the inputed character using getchar() : "<<ch<<endl<<endl;
   
    // puts() function
    char statement[] = "Use of puts function"; 
    puts(statement);

    //gets function
    char str[100];
    cout <<"\nTaking input using gets function: ";
    gets(str);
    cout << "You entered: "<<str<<endl;                             
    
    return 0;
}