/*  Classes and Objects in OPP
        1.  write a C++ program to declare a class along with data members and member functions in 
            its body and create the objects of class in the main( ) function and call member functions 
            of class with the help of objects;   
             
    Access Modifiers (Public, Private, and Protected)
        1.  write a C++ program in which class members are not accessible outside the class (private 
            access specifier);
        2.  write a C++ program in which class members are accessible from anywhere where the object 
            is visible (public access specifier);
        3.  write a C++ program in which a class uses both public and 
            private access specifiers;      */
        
#include <iostream>

using namespace std;

//  Defining class
class student {
    private:
        string Name = "Aftab Nafees";
        string School = "Aga Khan Higher Secondary School, Gilgit";
        int RollNo = 3;
    
    public:
        void detail(){
            cout<<"Name : "<<Name<<endl;
            cout<<"Roll NO : "<<RollNo<<endl;
            cout<<"School : "<<School<<endl;
        }
};

int main(){
    //  Defining object for Class;
    student objstudent;

    //  Accessing data from Class 
    objstudent.detail();    

    return 0;
}
