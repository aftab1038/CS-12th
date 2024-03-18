// Code by AFTAB NAFEES
// GitHub : aftab1038

/* 2023 Model Paper Questions 
    Q7 b. Write a C program for calculating and printing the roots of quadratic equation using quadratic formula. 
          The quadratic formula to calculate the roots of quadratic equation is given below. 
            Roots  =(-b+-sqrt(b2 - 4ac)/2a, where d = b2 – 4ac. */ 

#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    // variables and getting variables
    cout<<"Quadratic Equation Solving..."<<endl;
    int a, b , c;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    cout<<"Enter the value of c : ";
    cin>>c;

    // Calculating possible values of x
    int x1, x2, d;
    d = pow(b, 2) - 4*a*c;
    x1 = int((-b + sqrt(d))/(2*a));
    x1 = int((-b - sqrt(d))/(2*a));

    // Printing the values
    cout<<"X = "<<x1<<endl;
    cout<<"X = "<<x2<<endl;
    
    return 0;
}