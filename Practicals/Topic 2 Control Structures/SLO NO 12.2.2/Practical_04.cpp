// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  SLO NO. : 12.1.5 
    SLO Name : Write a C++ program that uses for loop */

#include <iostream>

using namespace std;

int main()
{
    // Variable declaraction
    int size;

    cout<<"Printing Block!"<<endl;

    // Getting size of block
    cout<<"Enter size of block : ";
    cin>>size;

    // Printing vertical Block
    cout<<"Orientation : vertical"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<"#"<<endl;
    }

    // Printing horizontal Block
    cout<<"Orientation : horizontal"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<"#";
    }

    return 0;
}

