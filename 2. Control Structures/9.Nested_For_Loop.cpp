// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Nested For Loop
        write a program using nested for loop */
    
#include <iostream>

using namespace std;

int main()
{
    cout<<"Printing Two Dimensional Block"<<endl;

    int row, column;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>column;

    //  Loop for printing Rows
    for (int i = 0; i < row; i++)
    {
        //  Loop for printing Columns
        for (int j = 0; j < column; j++)
        {
            cout<<"#";
        }

        cout<<endl;
    }

    return 0;
}