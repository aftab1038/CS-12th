// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Do While Loop
        write a C++ program that uses do while loop */

#include <iostream>

using namespace std;

int main()
{
    //  promting User untill required number is not entered
    int num;

    do
    {
        cout<<"Enter a number: ";
        cin>>num;

        if (num <= 0)
        {
            cout<<"Sorry! You didn't enter Postive number."<<endl;
        } 
        
    } while (num <= 0);
    
    if (num > 0)
    {
        cout<<"Thank You for entering postive number."<<endl;
    }
    
    return 0;
}