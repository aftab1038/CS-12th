// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  SLO NO : 13.1.7
    SLO Name : Write a C++ program which stores numeric values in a one dimensional array using for loop and finds the highest, lowest and average values */

#include <iostream>

using namespace std;

int main()
{   
    cout<<"Arrays!\n";

    // Array Declaration and getting size of array from User 
    int size, highest=0, lowest = 0, average=0;
    cout<<"Enter the size of array : ";
    cin>>size;
    int list[size];

    // Promting User to enter Values to Store in array
    cout<<"Enter the values...\n";
    for (int i = 0; i<size; i++)
    {
        cout<<"a"<<i+1<<" : ";
        cin>>list[i];   
    }
    
    // Printing the array
    cout<<"Array : "<<"{ ";
    for (int i = 0; i<size; i++)
    {
        cout<<list[i]<<" ";
         
    }
    cout<<"}\n"; 

    // Identifying height, lowest and average
    for (int i = 0; i<size; i++)
    {
        average = average + list[i];

        if (list[i]>=highest)
        {
            highest = list[i];
        }

        if (list[i]<=lowest)
        {
            lowest = list[i];
        }   
    }

    // Printing height, lowest and average of values
    cout<<"Average of Values : "<<average/size<<endl;
    cout<<"Highest Value : "<<highest<<endl;
    cout<<"lowest Value : "<<lowest<<endl;

    return 0;
}