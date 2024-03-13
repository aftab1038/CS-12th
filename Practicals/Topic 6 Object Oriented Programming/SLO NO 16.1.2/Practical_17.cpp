// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  SLO NO. : 16.1.2
    SLO Name : Write a C++ program to declare a class along with data members and member functions in its body and create the objects of class in the main( ) function and call member functions of class with the help of objects */

#include <iostream>

using namespace std; 

int main()
{
    cout<<"Classes and Objects....."<<endl<<endl;

    // Class Declaration
    class Student
    {
    private:    // Private access specifier (Access only with in this class)
        // Private data members
        string name = "Aftab Nafees";
        int roll_no = 2;
        string grade = "12th-ICS";
    
    public:     // Public access specifier (Access anywhere in the code)
        // Public member function (Access anywhere in the code)
        void std_profile()
        {
            cout<<"Student Profile"<<endl;
            cout<<"Name\t: "<<name<<endl;
            cout<<"Roll NO\t: "<<roll_no<<endl;
            cout<<"Grade\t: "<<grade<<endl;
        }
    };

    // object declaration 
    Student std;

    // Accessing the publc 
    std.std_profile();
    
    return 0;
}