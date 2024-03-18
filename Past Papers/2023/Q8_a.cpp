// Code by AFTAB NAFEES
// GitHub : aftab1038

/* 2023 Paper Questions 
    Q8 a. Write a C++ program that reverses an inputted string of 10 alphabets and prints it on the screen  */

#include <iostream>

using namespace std;

int main()
{
    // variable declaring and taking input from user
    string str;
    cout<<"Enter a string of 10 Alphabets"<<endl;
    getline(cin,str);

    // Revering the string
    cout<<"Revered form..."<<endl;
    for (int i = 10; i>=0; i--)
    {
        cout<<str[i];
    }
}