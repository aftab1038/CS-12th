// Code by AFTAB NAFEES
// GitHub : aftab1038

/* 2023 Paper Questions 
    Q8 b. Write a C++ program using user-defined function that takes three numbers as an input and print their mean */

#include <iostream>

using namespace std;

// Declaring user-defined function
float mean(float num1, float num2, float num3);

int main()
{
    // variable declaring and taking input from user
    float num1, num2, num3;
    cout<<"Enter 3 number to find mean"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;

    // Calling user-defined function for mean
    mean(num1, num2, num3);

    return 0;
}

// user defined function
float mean(float num1, float num2, float num3)
{
    // calculating mean
    float sum = num1 + num2 + num3;
    float mean = sum/3.0;

    // printing mean
    cout<<"Mean : "<<mean<<endl;

    return 0;
} 