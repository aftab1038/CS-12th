// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  File Handling in C++ Programming
        write programs to show the file opening and closing; 
        write programs to write in file; */

#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ofstream out;
    out.open("file.txt");
    string text;
    cout<<"Enter the Text : ";
    getline(cin, text);
    out<<text; 
    out.close();


    return 0;
}