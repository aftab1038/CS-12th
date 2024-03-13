// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  SLO NO : 14.1.5
    SLO Name : Write a program involving user defined function to perform basic arithmetic operations, i.e. add, subtract, multiply and divide */

#include <iostream>

using namespace std;

// User-defined functions
float Addition(float num1, float num2);
float Subtraction(float num1, float num2);
float Multiplication(float num1, float num2);
float Division(float num1, float num2);

int main()
{       
    // Variable Declaration 
    float num1, num2;
    char operation;

    // Prompting User for input
    cout<<"Enter Number 1 : ";
    cin>>num1;
    cout<<"Enter Number 2 : ";
    cin>>num2;
    cout<<"Enter the operation (+ - * /) : ";
    cin>>operation;

    // If user input Addition Symbol
    if (operation == '+')
    {
        cout<<"Addition : "<<Addition(num1, num2)<<endl;
    }

    // If user inputed Subtraction Symbol
    else if (operation == '-')
    {
        cout<<"Subtraction : "<<Subtraction(num1, num2)<<endl;
    }

    // If user inputed Multiplication Symbol
    else if (operation == '*')
    {
        cout<<"Multiplication : "<<Multiplication(num1, num2)<<endl;
    }

    // If user inputed Division Symbol
    else if (operation == '/')
    {
        cout<<"Division : "<<Division(num1, num2)<<endl;
    }

    // If User inputed a anything wrong 
    else
    {
        cout<<endl<<"Invalid Input!"<<endl;
    }
    
    return 0;
}

// User-defined function for addition 
float Addition(float num1, float num2)
{
    return num1+num2;
}

// User-defined function for subtraction
float Subtraction(float num1, float num2)
{
    return num1-num2;
}

// User-defined function for multiplication
float Multiplication(float num1, float num2)
{
    return num1*num2;
}

// User-defined function for division
float Division(float num1, float num2)
{
    return num1/num2;
};