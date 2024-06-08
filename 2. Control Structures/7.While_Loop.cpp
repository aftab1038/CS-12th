// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  While Loop
        write a C++ program that uses while loop */

#include <iostream>

using namespace std;

int main()
{
    cout<<"Printing sequences of number using while loop!\n";
    int size;

    cout<<"Enter a postive number: ";
    cin>>size;

    //  Printing sequences of number 
    int i = 1;
    while(i <= size)
    {
        cout<<i<<endl;
        i++;
    }

    return 0;
}