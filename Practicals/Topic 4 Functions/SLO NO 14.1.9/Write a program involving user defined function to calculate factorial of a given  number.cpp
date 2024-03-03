/*  SLO NO. : 14.1.9
    SLO Name : Write a program involving user defined function to calculate average of numbers */

#include <iostream>

using namespace std;

// Function Declare
float Average();

int main()
{
    cout<<"Average Calculator....."<<endl;

    // Function Calling
    float average = Average();
    
    // Printing
    cout<<"Average : "<<average;

    return 0;
}

// Function to calculate Average
float Average()
{
    float number, n;
    float sum = 0; 

    cout<<"Enter the total number : ";
    cin>>n;

    cout<<"Enter the numbers : "<<endl;
    int i = 0;
    do
    {
        cin>>number;
        sum += number;
        i++;
    } while( i < n);
   
    return sum/n;
}

