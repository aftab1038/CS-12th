// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  File Handling in C++ Programming
        write programs to show the file opening and closing; 
        write programs to writting in file character by character; */

#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main() 
{
    ofstream out;
    out.open("file1.txt");
    int i = 0, length;
    cout<<"Number of character you want to enter : ";
    cin>>length;

    char chr;
    cout<<"Enter the character : \n";

    while (i<length)
    {
        cin>>chr;
        out.put(chr);
        i++;
    }
    out.close();
}