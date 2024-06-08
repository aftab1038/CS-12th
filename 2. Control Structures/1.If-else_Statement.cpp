// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  if-else Statement
        write a program with if else statements */ 

#include <iostream>

using namespace std;

int main()
{
    float marks;

    cout<<"Enter your Percentage: ";
    cin>>marks;
    
    if (marks > 40.0)       //  Enter condition in () barkets with with reserved word if
    {
        /*  Body of if statement,
            If condition is true then this will excute */
        cout<<"You are pass with "<<marks<<"%"<<endl;
    } 

    else                   //  else is the reserved word for else statement 
    {
        /*  Body of else statement
            If condition of if statement false then this will excute */
        cout<<"Sorry you are fail, Passing percentage is 40%"<<endl;
    }

    return 0;
}
