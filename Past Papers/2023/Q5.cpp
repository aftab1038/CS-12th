// Code by AFTAB NAFEES
// GitHub : aftab1038

/* 2023 Paper Questions 
    Q5. Complete the given C++ code to create an object and call the member function using object oriented programming.  */

#include <iostream> 

using namespace std; 

// Base class named "Animal"
class Animal { 
   public: 
    void eat() { 
        cout << "I can eat!" << endl; 
    } 
    void sleep() { 
        cout << "I can sleep!" << endl; 
    } 
}; 

// Derived class of animal named "Dog"
class Dog : public Animal { 
   public: 
    void bark() { 
        cout << "I can bark! Woof woof!!" << endl; 
    } 
}; 

int main() 
{ 
    // Create object of the Dog class 
    Dog objdog;

    // Calling members of the base class 
    objdog.eat();
    objdog.sleep();
  
    // Calling member of the derived class
    objdog.bark(); 
     
    return 0; 
}