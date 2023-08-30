/*
    Use of array
    TO DO:
        declare array, length of 3
        get two inputs fronm user, add those numbers and 
        store in same array where inputed number are stored
*/

#include <iostream>

using namespace std;

int main()
{
    double num[3];

    for (int i = 0; i < 2; i++)
    {
        cout<<"Number "<<i+1<<": ";
        cin>>num[i];
    } 

    num[2] = num[0] + num[1];
    cout<<"Sum of input numbers: "<<num[2]<<endl;
    
}
