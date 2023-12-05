/*  Write a program to print text using the following escape..... 
    sequences:
        a. alert – \a                       b. backspace – \b
        c. newline – \n                     d. carriage return – \r
        e. tab – \t                         f. display backslash – \\
        g. display single quotation marks – \’;                        */

#include <iostream>

using namespace std;

int main()
{
    cout<<"New line\nHorizontal\ttab\n\"Double quotation\"\n"
        <<"\'Single quotation\'\nBackslah: \\\nBackspace\be\n"
        <<"Carriage return \r\nBeep sound\a\n";

    return 0;
}