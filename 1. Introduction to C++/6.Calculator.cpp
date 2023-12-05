/*  Calculator.....
        Arithmetic Operation
        1. Addition(+)          2. Subtraction(-)
        3. Multiplication(*)    4. Division(/)
        5. Modulus(%)  
    Assignment operator     */

#include <iostream>

using namespace std;

// Declaration of functions for every operation
float sum();
float subt();
float product();
float div();
int mod();

// Main function
int main()              
{
// Function call
    sum();
    subt();
    product();
    div();
    mod();

    return 0;
} 



// Function for Addition
float sum()
{
    float a,b,sum;

    cout<<"Input numbers for addition\n"
        <<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;

    // = is assignment operator
    sum=a+b;                        //  + Add operator

    cout<<a<<"+"<<b<<" = "<<sum<<endl;

    return sum;
}

// Function for Subtraction
float subt()
{
    float a,b,subt;

    cout<<"Input numbers for subtraction\n"
        <<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;

    subt=a-b;                       //  - Subtract operator                         

    cout<<a<<"-"<<b<<" = "<<subt<<endl;

    return subt;
}

// Function for Multiplication
float product()
{
    float a,b,prod;

    cout<<"Input numbers for multiplication\n"
        <<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;

    prod=a*b;                       //  * operator for Multiplying

    cout<<a<<"*"<<b<<" = "<<prod<<endl;

    return prod;
}

// Function for Division
float div()
{
    float a,b,div;

    cout<<"Input numbers for division\n"
        <<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;

    div=a/b;                        //  / Operator for Division

    cout<<a<<"/"<<b<<" = "<<div<<"\n";

    return div;
}

// Function for Modulus
int mod()
{
    int a,b;
    int mod;

    cout<<"Input numbers for finding remainder(only integers, not decimal)\n"
        <<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;

    mod=a%b;                                     // % Operator for finding remainder (modules)

    cout<<"Remainder of "<<a<<"/"<<b<<": "<<mod<<"\n";

    return mod;
}