// Code by AFTAB NAFEES
// GitHub : aftab1038

/* 2023 Model Paper Questions 
    Q7 a. Consider a simple arithmetic calculator which performs addition, subtraction, multiplication and division of two numbers. 
          Write a C++ program for this calculator using switch statement that 
            * inputs any one of the four arithmetic operators i.e., +, -, *, / 
            * inputs any two values having float data type. 
            * uses switch statements to perform the operation depending upon the input operator 
            * outputs the result of arithmetic operation  */ 

#include <iostream>

using namespace std;

int main()
{
    // variable declaring 
    float num1 , num2;
    char sign;

    // taking input
    cout<<"Enter number : ";
    cin>>num1;
    cout<<"Enter operation(+,-,*,/) : ";
    cin>>sign;
    cout<<"Enter  another number : ";
    cin>>num2;

    // using switch statements performing the operation depending upon the input operator and printing the result
    switch(sign)
    {
        case '+':
            cout<<"Addition : "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Subtraction: "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Multiplication : "<<num1*num2<<endl;
            break;
        case '/':
            cout<<"Division : "<<num1/num2<<endl;
            break;
        default :
            cout<<"Invalid Input!!"<<endl;
            break;
    }

    return 0;
}