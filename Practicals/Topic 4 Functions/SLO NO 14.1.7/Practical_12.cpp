// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  SLO NO. : 14.1.7
    SLO Name : Write a program involving use of user defined function to calculate volume of cylinder, sphere and cube */

#include <iostream>

using namespace std;

// Function Declaraction
void volumeCylinder();
void volumeSphere();
void volumeCube();


int main()
{
    cout<<"Volume Calculator....."<<endl;
    int value;
    cout<<"1. Cylinder"<<endl
        <<"2. Sphere"<<endl
        <<"3. Cube"<<endl;
    cout<<"Enter a value : ";
    cin>>value;
    cout<<endl;

    // Function Calling
    if(value == 1)
    {
        volumeCylinder();
    }

    else if(value == 2)
    {
        volumeSphere();
    }

    else if(value == 3)
    {
        volumeCube();
    }

    else
    {
        cout<<"Invalid Input!!"<<endl;
    }
    
    return 0;
}

// Function to calculate volume of Cylinder
void volumeCylinder()
{   
    cout<<"Cylinder....."<<endl;
    
    const float pie = 3.14;
    
    float radius, height;
    cout<<"Enter the Radius of the Cylinder: ";
    cin>>radius;
    cout<<"Enter the Height of the Cylinder : ";
    cin>>height;
    
    float volume = pie*radius*radius*height;
    cout<<"Volume of Cylinder : "<<volume<<endl;
}

// Function to calculate Volume of Sphere
void volumeSphere()
{
    cout<<"Sphere....."<<endl;

    const float pie = 3.14;
    
    float radius;
    cout<<"Enter the Radius of Sphere : ";
    cin>>radius;
    
    float volume = (4*radius*radius*radius)/3;
    cout<<"Volume of Sphere : "<<volume<<endl;
}

// Function to calculate Volume of cube 
void volumeCube()
{
    cout<<"Cube....."<<endl;
    
    float length; 
    cout<<"Enter the Length of the Cube : ";
    cin>>length;
    
    float volume = length*length*length;
    cout<<"Volume of Cube : "<<volume<<endl;
}
