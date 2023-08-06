/* Task 3
    1. Area of Rectangle.
    2. Volume of Sphere. */

#include <iostream>

using namespace std;

int main() {

//Declaration of variables 
    float L;
    float B;
    float R;
    float P;
    
    float length = L = 25;			//Length of Rectangle.
    float breath = B = 35;			//Breath of Rectangle.
    float radius = R = 15;			//Radius of sphere. 
    const float pie = P= 3.14;		//Pie value (3.14).
    
    
    float area = L * B;			//Formula of Area of rectangle
    float volume =  4*P*R*R*R/3;	//Formula of volume of sphere

//Area of Rectangle.
    cout << "Area of Rectangle : "<<area<<"m^2" << endl;

//Volume of Sphere.
    cout << "Volume of Sphere: "<<volume<<"m^3" << endl;

    return 0;

}
