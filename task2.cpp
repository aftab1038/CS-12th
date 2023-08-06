/*  Task 2
        1.Area of circle
        2.Find x using Quadratic formula 
            x = {−b ± √(b2 − 4ac)}/2a  */
            
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    const float p=3.14;     // p is for pi which is a constant value(3.14)
          float r;          // r is for the raduis of circle
          float a;          // a is Quadratic formula a
          float b;          // b is Quadratic formula b
          float c;          // c is Quadratic formula c
          float d;          // d is the discriminat in Quadratic formula
          
/*  According to Quadratic formula x has two possible value 
        1. x = {−b + √(b2 − 4ac)}/2a        2. x = {−b - √(b2 − 4ac)}/2a    */
        
          float x1;         // x1 is the first value 
          float x2;         // x2 is the second value 
          
        r=5;                    a=3;                b=7; 
        c=2;                    d=b*b-4*a*c;       
        x1 = -b+sqrt(d)/2*a;                        x2 = -b-sqrt(d)/2*a; 
        
        
          float area=p*r*r;             // Area of circle
        
    cout<<"Area of circle = "<<area<<"m^2"<<endl
        <<"The first possible value of x = x1 = "<<x1 <<endl
        <<"The second possible value of x = x2 = "<<x2<<endl;
    
    return 0;
}