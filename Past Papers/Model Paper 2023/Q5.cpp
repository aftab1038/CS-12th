// Code by AFTAB NAFEES
// GitHub : aftab1038

/* 2023 Model Paper Questions 
    Q5. Write a C ++ program to show the concept of single inheritance in object-oriented programming. The program should include the following: 
        * A base class named as College having a variable named as CollegeName that stores the string Rising Star College  
        * A child class named as Teacher that inherits College class. It also stores Omar Khan in TeacherName, Science Department in CollegeDepartment and Math in the SubName variables. 
        * An object of Teacher class named as obj to display the name of the college, teacher, department and subject.  */

#include <iostream> 

using namespace std; 

// A base class named as College 
class College 
{
    public :
        string CollegeName = "Rising Star College";
};

// A child class named as Teacher 

class Teacher : public College {
    public :
        string TeacherName = "Omar Khan";
        string CollegeDepartment = "Science Department";
        string SubName = "Math";
};

int main() 
{ 
    // An object of Teacher class named as obj
    Teacher obj;

    // Using teacher object, display the name of the college, teacher, department and subject.
    cout<<"College Name : "<<obj.CollegeName<<endl;
    cout<<"Teacher Name : "<<obj.TeacherName<<endl;
    cout<<"subject Name : "<<obj.SubName<<endl;
    cout<<"College Department : "<<obj.CollegeDepartment<<endl;
     
    return 0; 
}