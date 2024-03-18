// Code by AFTAB NAFEES
// GitHub : aftab1038

/* 2023 Model Paper Questions 
    Q8 a. Write a program using a user-defined function named ‘RectVol’ that would calculate the volume of a rectangular prism and invoke it in the main function. 
          The formula to calculate the volume is given below. 
            * Volume of a Rectangular Prism = Length × Width × Height  */ 

#include <iostream>

using namespace std;

// Declaring User-defined function
int RectVol();

int main()
{
    // Calling function 
    RectVol();
    
    return 0;
}

// User-defined function for volume calculating
int RectVol()
{   
    // Variables 
    int length, height, width, volume;

    // Taking input
    cout<<"Enter the length of Rectangular Prism : ";
    cin>>length;
    cout<<"Enter the Width of Rectangular Prism : ";
    cin>>width;
    cout<<"Enter the height of Rectangular Prism : ";
    cin>>height;

    // Calculating area
    volume = height*length*height;

    // printing the volume
    cout<<"Volume of Rectangular Prism : "<<volume;

    return 0;
}