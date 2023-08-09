/* Take an age input in integer
     If age is greater than 28, print you are allowed to sit in the session
     otherwise, print you are not allowed */

#include <iostream>

using namespace std;

int main()
{
    int a;
    
    cout<<"Input your age: ";
    cin>>a;
   
    if (a>28)
    {
        cout<<"Your are allowed to sit in the session"<<endl;
    }
 
    else 
    {
        cout<<"Your are not allowed "<<endl;
    }
    
    return 0;
}
