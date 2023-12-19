/*  One Dimensional Array
        1. Write C++ code to declare one dimensional array with different sizes and data types
        2. Write C++ code to initialise one dimensional array
        3. Apply process of traversing using all types of loops for input, output and manipulation of elements */

#include <iostream>

using namespace std;

int main()
{
    //  Declaring and Initialise of 1D array
    string SubName[5] = {"English", "Urdu", "Maths","Computer Scieance", "Physics"};
    float marks[5];    //  Declaring 1D Array

    cout<<"Enter Your Marks out of 100"<<endl;

    //  Taking input for array using for loop
    for (int i = 0; i < 5; i++)
    {
        cout<<SubName[i]<<": ";
        cin>>marks[i];
    }
    cout<<endl;

    //  Outputing the entered data in array using while loop
    cout<<"Your Marks"<<endl;
    int i = 0;
    while (i < 5)
    {
        cout<<SubName[i]<<": "<<marks[i]<<endl;
        i++;
    }
    
    return 0;
}
