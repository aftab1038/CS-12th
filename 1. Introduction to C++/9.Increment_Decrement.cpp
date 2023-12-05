/*    Increment and Decrement Operators.....
        1. Prefix scenario
        2. Postfix Scenario*/

#include <iostream>   

using namespace std;

int main()
{
    // Increment 
    cout << "Increment Operator :" << endl << endl;
    
    cout << "Scenario 1 Pre-Increment" << endl;
    int x = 10;
    cout <<"Value of X before increment : "<< x << endl;
    int temp = x++;                            // Post-Increment
    cout << "Value of temp : " << temp << endl;
    cout << "Value of X after Post Increment : " << x << endl << endl;
    
    
    cout << "Scenario 2 Post-Increment" << endl;
    int y = 20;
    cout << "Value of Y before increment : " << y << endl;
    int temp1 = ++y;                          // Pre-Increment
    cout << "Value of temp : " << temp1 << endl;
    cout << "Value of Y after Pre Increment : " << y << endl << endl;


    // Decrement 
    cout << "Decrement Operator :" << endl << endl;
    
    cout << "Scenario 1 Pre-Decrement" << endl;
    int a = 10;
    cout <<"Value of A before decrement : "<< a << endl;
    int temp2 = a--;                            // Post-Decrement
    cout << "Value of temp : " << temp2 << endl;
    cout << "Value of A after Post Decrement : " << a << endl << endl;
    
    
    cout << "Scenario 2 Post-Decrement" << endl;
    int b = 20;
    cout << "Value of B before decrement : " << b << endl;
    int temp3 = --b;                          // Pre-Decrement 
    cout << "Value of temp : " << temp3 << endl;
    cout << "Value of B after Pre Decrement : " << b << endl << endl;
    
    return 0;
}