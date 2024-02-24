#include <iostream>

using namespace std;

int main()
{
    int matrix[2][3];

    cout<<"enter elements of matrix"<<endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"a"<<i+1<<j+1<<": ";
            cin>>matrix[i][j];
        }
    }

    cout<<"you entered" <<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


}