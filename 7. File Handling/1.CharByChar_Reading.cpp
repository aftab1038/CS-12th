
/*  File Handling in C++ Programming
        write programs to show the file opening and closing; 
        write programs to read a file character by character; */

#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main() 
{
    ifstream in;
    in.open("file1.txt");
    char chr;
    cout<<"Character in file : \n";
    while (in.eof() == 0)
    {
        in.get(chr);
        cout<<chr;
    }
    in.close();

}