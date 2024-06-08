// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  Relational operator.....     */

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cout<<"input the value of num1: ";
    cin>>a;
    cout<<"input the value of num2: ";
    cin>>b;
    
    if (a>b)                            //  > Greater than
    {
        cout<<a<<" greatar than "<<b<<endl;
    }
    else if (a<b)                      //   < Less than
    {
        cout<<a<<" less than "<<b<<endl;
    }
    else if (a==b)                     //   == Equal to 
    {
        cout<<a<<" equal to "<<b<<endl;
    }
    
    return 0;
}
