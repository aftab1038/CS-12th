/*  SLO NO. : 14.1.6
    SLO Name : Write a program involving user defined function to calculate area of circle, triangle and parallelogram. */

#include <iostream>

using namespace std;

// Function Declaraction
void areaCircle();
void areaTriangle();
void areaParallelogram();


int main()
{
    cout<<"Area Calculator....."<<endl;
    int value;
    cout<<"1. Circle"<<endl
        <<"2. Triangle"<<endl
        <<"3. Parallelogram"<<endl;
    cout<<"Enter a value : ";
    cin>>value;
    cout<<endl;

    // Function Calling
    if(value == 1)
    {
        areaCircle();
    }

    else if(value == 2)
    {
        areaTriangle();
    }

    else if(value == 3)
    {
        areaParallelogram();
    }

    else
    {
        cout<<"Invalid Input!!"<<endl;
    }
    
    return 0;
}

// Function to calculate area of circle 
void areaCircle()
{   
    cout<<"Circle....."<<endl;
    
    const float pie = 3.14;
    
    float radius;
    cout<<"Enter the Radius of the Circle : ";
    cin>>radius;
    
    float area = 2*pie*radius;
    cout<<"Area of Circle : "<<area<<endl;
}

// Function to calculate area of triangle
void areaTriangle()
{
    cout<<"Triangle....."<<endl;
    
    float base, height;
    cout<<"Enter the Base of the Triangle : ";
    cin>>base;
    cout<<"Enter the Height of the Triangle : ";
    cin>>height;
    
    float area = (base*height)/2;
    cout<<"Area of Triangle : "<<area<<endl;
}

// Function to calculate area of parallelogram
void areaParallelogram()
{
    cout<<"Parallelogram....."<<endl;
    
    float base, height;
    cout<<"Enter the Base of the Parallelogram : ";
    cin>>base;
    cout<<"Enter the Height of the Parallelogram : ";
    cin>>height;
    
    float area = base*height;
    cout<<"Area of Parallelogram : "<<area<<endl;
}
