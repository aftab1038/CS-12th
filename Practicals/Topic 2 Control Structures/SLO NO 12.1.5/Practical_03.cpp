// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  SLO NO. : 12.1.5 
    SLO Name : Write a program using switch statement */

#include <iostream> 

using namespace std;

int main()
{
    // Varible Declaration 
    float Num1, Num2, result;
    char opera;

    cout<<"Basic Calculator!"<<endl;

    // Taking input from user 
    cout<<"Enter first number : ";
    cin>>Num1;
    cout<<"Enter operation (+ - * /) : ";
    cin>>opera;
    cout<<"Enter second number : ";
    cin>>Num2;

    
    switch (opera)
    {
        // Addition 
        case '+':
            result = Num1+Num2;
            cout<<"Result : "<<result<<endl;
            break;

        // Subtraction 
        case '-':
            result = Num1-Num2;
            cout<<"Result : "<<result<<endl;
            break;

        // Multiplication 
        case '*':
            result = Num1*Num2;
            cout<<"Result : "<<result<<endl;
            break;

        // Division 
        case '/':
            result = Num1/Num2;
            cout<<"Result : "<<result<<endl;
            break;

        // If user enter wrong Input
        default:
            cout<<"Invalid Input!"<<endl;
            break;
    }

    return 0;
}
