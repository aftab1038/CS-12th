// Code by AFTAB NAFEES
// GitHub : aftab1038

/* 2023 Paper Questions 
    Q7 a. Write a C++ program to check whether an inputted alphabet is upper case or lower case.  */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // Taking input 
    char chr;
    cout<<"Enter a Alphabet : ";
    cin>>chr;

    // if Alphabet is  lower case
    if (islower(chr))
    {
        cout<<"Lower Case Alphabet"<<endl;
    }

    // if alphabet is upper case
    else if (isupper(chr))
    {
        cout<<"Upper Case Alphabet"<<endl;
    }

    // if user enter wrong input
    else 
    {
        cout<<"Invalid input!!"<<endl;
    }

    return 0;
}