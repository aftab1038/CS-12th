#include <iostream>

using namespace std;

int main()
{
    int num[5];

    for (int i = 0; i < 5; i++)
    {
        cout<<"Number "<<i<<": ";
        cin>>num[i];
    } 

    cout<<"\nNumbers are:\n\n";

    for (int j = 0; j < 5; j++)
    {
        cout<<"Number "<<j<<": "<<num[j]<<endl;
    }
    
}
