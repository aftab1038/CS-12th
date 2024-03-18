// Code by AFTAB NAFEES
// GitHub : aftab1038

/* 2023 Paper Questions 
    Q7 b. Write a C++ program to display n terms of natural numbers and their sum  */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // variable declaring and taking input from user
    int sum = 0, n;
    cout<<"Enter a ending number : ";
    cin>>n;

    // printing numbers till n and adding these numbers 
    for (int i = 1; i<=n; i++)
    {
        cout<<i<<endl;
        sum += i;   
    }

    // printing sum 
    cout<<"Sum of these natural Numbers : "<<sum<<endl;
    return 0;
}