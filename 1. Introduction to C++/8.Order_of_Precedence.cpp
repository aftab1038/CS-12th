// Code by AFTAB NAFEES
// GitHub : aftab1038

/* Order of Precedence
        write a c++ program to solve the following expression:
         1. result1 = ((a+b)*c)/d
         2. result2 = ((a+b)/c)*d
         3. result3 = (a+b)/(a-b)/(c*d)  */
    
#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;
    double result1,result2,result3;
    
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;
    cout<<"Enter the number c: ";
    cin>>c;
    cout<<"Enter the number d: ";
    cin>>d;
    
    result1 = ((a+b)*c)/d;
    cout<<"((a+b)*c)/d = "<<result1<<endl;
    result2 = ((a+b)/c)*d;
    cout<<"((a+b)/c)*d = "<<result2<<endl;
    result3 = (a+b)/(a-b)/(c*d);
    cout<<"(a+b)/(a-b)/(c*d) = "<<result3<<endl;
    
    return 0;
}
