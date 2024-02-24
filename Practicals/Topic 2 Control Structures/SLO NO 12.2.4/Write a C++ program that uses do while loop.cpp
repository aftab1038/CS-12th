/*  SLO NO. : 12.2.4 
    SLO Name : Write a C++ program that uses do while loop */

#include <iostream>

using namespace std;

int main()
{
    // Variable Declaration 
    int number=6, userNo;

    // Working of this program 
    cout<<"Guess the Number\nHint : Number is between 1 to 10\n";

    // Looping to get a specific value from user 
    do{
        cout<<"Enter a Number : ";
        cin>>userNo;

        // If user input wrong value 
        if(userNo != number)
        {
            cout<<"Sorry Wrong Guess!\nTry Again....\n";
        }

    } while (userNo != number);

    // If user input Right value
    if (userNo == number)
    {
        cout<<"Congrats Right Guess!\n";
    }

    return 0;
} 

