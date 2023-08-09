/* Take an input in text.
    If text is apple, print this is an apple
    otherwise, print this is an apple */

#include <iostream>

using namespace std;

int main()
{
    string a;
    
    cout<<"Input fruit name: ";
    cin>>a;
   
    if (a=="apple")
    {
        cout<<"This is an Apple"<<endl;
    }
 
    else 
    {
        cout<<"This is not an Apple"<<endl;
    }
    
    return 0;
}