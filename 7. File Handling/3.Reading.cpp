// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  File Handling in C++ Programming
        write programs to show the file opening and closing; 
        write programs to read text from file; */

#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ifstream in;
    in.open("file.txt");
    string text;
    getline(in, text);
    cout<<"Text in the file : "<<endl;
    cout<<text<<endl;
    in.close();


    return 0;
}