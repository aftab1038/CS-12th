// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  SLO NO> : 12.2.3 
    SLO Name : Write a C++ program that uses while loop */

#include <iostream>

using namespace std;

int main()
{
    cout<<"Printing pattern of n by m!"<<endl;
    
    int row, column;
    cout<<"Enter number of rows : ";
    cin>>row;
    cout<<"Enter number of columns : ";
    cin>>column;

    int i=0;
    while (i<row)
    {
        int j=0;
        while (j<column)
        {
            cout<<"#";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
