// Code by AFTAB NAFEES
// GitHub : aftab1038

/* 2023 Model Paper Questions 
    Q8 b. Write a C++ program in which a two dimensional is declared and the user can input the values using for loop and print the inputted values.    */ 

#include <iostream>

using namespace std;

int main()
{
    // variable declaring
    int array[2][2];

    // taking input
    cout<<"Enter the values of 2 by 2 array : "<<endl;
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>array[i][j];
        }
    }

    // printing the 2D array
    cout<<"\nPrinting the array..."<<endl;
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}