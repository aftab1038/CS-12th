/*  For Loop 
        write a C++ program that uses for loop */

#include <iostream>

using namespace std;

int main()
{   
    int size;

    cout<<"Enter the size of block: ";
    cin>>size;

    //  Printing horizontal Block
    cout<<"Orientation of block: Horizontal"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"#";
    } 

    //  Printing vertical Block
    cout<<"Orientation of block: Vertical"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"#"<<endl;
    } 

    return 0;
}