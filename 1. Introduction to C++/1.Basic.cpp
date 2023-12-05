/*  Basic of C++ programming.....
        1. Pre-processor directives
        2. Main function 
        3. Body of program  
        4. Namespace
        5. Comments
        6. Variable
        7. Terminator
        8. Return     */

//  single line comment

/*
    Double line comments
                             */

#include <iostream>         //  Pre-processor directives

using namespace std;        //  Namespace

string name = "Aftab";      //  Global Variable

int main()                  //  Main Function
{
    //Body of program
    string statement = "My First C++ Program\nBasic of C++ programming";  // Local Variable
    cout<<"Name of Student : "<<name<<endl
        <<statement<<endl;

    //  ; called Terminator

    return 0;               // Return Statement
}
