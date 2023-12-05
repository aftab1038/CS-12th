#include<iostream>
#include <cstring>

#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

using namespace std;

int main()
{
   string name[][2] = {
                            {"Arslan", "20"},
                            {"Sadam", "22"},
                            {"Aman", "28"},
                            {"Faheem", "18"},
                            {"Faizan", "24"},
                            {"Babar", "26"},
                            {"Sajid", "16"},
                            {"sajjad", "36"}
                        };
                        
    cout<<UNDERLINE<<"Name\t\tAge\n"<<CLOSEUNDERLINE;
    int rows = sizeof name / sizeof name[0];
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<name[i][j]<<"\t\t";
        }
        
        cout<<"\n";
    }
   
   return 0;
}
