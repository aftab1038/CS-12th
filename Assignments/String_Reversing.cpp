// Code by AFTAB NAFEES
// GitHub : aftab1038

// String Reversing

#include <iostream>

using namespace std;

int main()
{
    // variable declaring and taking input from user
    string str;
    cout<<"Enter a string of 10 Alphabets"<<endl;
    getline(cin,str);
    
    // Finding the Number of characters in inputted string
    int len = str.size();

    // Reversing the string 
    cout<<"Revered form..."<<endl;
    for (int i = len; i>=0; i--)
    {
        cout<<str[i];
    }
    
    return 0;
}