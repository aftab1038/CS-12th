// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  SLO NO. : 14.1.8
    SLO Name : Write a program involving user defined function to calculate factorial of a given number. */

#include <iostream>

using namespace std;

// Function Declare
void Factorial(int num);

int main()
{
    cout<<"Factorial Calculator...."<<endl;

    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    // Factorial only exist for 0 and postive number
    if (num >= 0)
    {
        Factorial(num);
    }

     // Factorial of Negative number is undefined
    else if (num < 0)
    {
        cout<<"Factorial of "<<num<<" : Undefined"<<endl;
    }
    
    // if user only any other kind of input
    else
    {
        cout<<"Invalid Input!!"<<endl;
    }

    return 0;
}

// Function for factorial calculator
void Factorial(int num)
{
    int factorial=1;
    for (int i = 1; i<=num; i++)
    {
        factorial = factorial * i;
    }
    
    cout<<"Factorial of "<<num<<" : "<<factorial<<endl;
}

