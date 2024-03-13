// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  SLO NO. : 15.1.6
    SLO Name : Write a C++ program that uses pointer variable */

#include <iostream>

using namespace std;

int main()
{
    cout<<"Pointers....."<<endl;
    
    // variable declaration 
    int num = 15;
    //pointer declaration, with the name ptr, which store address of variable topic
    int *ptr = &num;

    // Output the value of  (15)
    cout<<"The value in variable : "<<num<<endl;
    
    // Output the memory address of topic using reference operator (&) 
    cout<<"The memory address of variable using & : "<<&num<<endl;
    
    // Output the memory address of topic using pointer (ptr)
    cout<<"The memory address of variable using pointer : "<<ptr<<endl;
    
    // Output the value of food using pointer (*ptr)
    cout<<"The value in variable using pointer : "<<*ptr<<endl;
    
    return 0;
}