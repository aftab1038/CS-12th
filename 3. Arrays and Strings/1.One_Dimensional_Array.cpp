// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  One Dimensional Array
        1. Write C++ code to declare one dimensional array with different sizes and data types
        2. Write C++ code to initialise one dimensional array
        3. Apply process of traversing using all types of loops for input, output and manipulation of elements
        4. write a program which stores numeric values in a one dimensional array using for loop and finds the highest, lowest and average values */

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

    //  Highest score and Name of that subject
    float highest = marks[0];
    string high_sub;
    for (int i = 0; i < 5; i++)
    {
        if (highest < marks[i])
        {
            highest = marks[i];
            high_sub = SubName[i];
        }
    }
    cout<<"Highest scored in "<<high_sub<<": "<<highest<<endl;

    //  Lowest score and Name of that subject
    float lowest = marks[0];
    string low_sub;
    for (int i = 0; i < 5; i++)
    {
        if (lowest > marks[i])
        {
            lowest = marks[i];
            low_sub = SubName[i];
        }
    }
    cout<<"Lowest scored in "<<low_sub<<": "<<lowest<<endl;

    //  Calculation on Arrays
    float obt_mark = 0, total_mark = 500;
    int j = 0;
    // Adding elements of arrays
    while(j < 5)
    {
        obt_mark += marks[j];
        j++;
    }
    cout<<"Average of Your Marks: "<<obt_mark/5<<endl;   
    cout<<"Obtain Marks: "<<obt_mark<<endl;
    cout<<"Total Marks: "<<total_mark<<endl;
    cout<<"Percentage: "<<(obt_mark*100)/total_mark<<endl;

    return 0;
}