/*  Convert if-else statement program to switch statement
        Rewrite a program having if/ if-else/ else-if statement using switch statement */

#include <iostream>

using namespace std;

int main()
{
    const float Tmark = 500;
    
    float english;
    cout <<"Enter your English marks: ";
    cin>>english;
    
    float urdu;
    cout <<"Enter your Urdu marks: ";
    cin>>urdu;
    
    float math;
    cout <<"Enter your MAths marks: ";
    cin>>math;
    
    float cs;
    cout <<"Enter your Computer science marks: ";
    cin>>cs;
    
    float physics;
    cout <<"Enter your Physics marks: ";
    cin>>physics;
    
    cout<<"Total marks: "<<Tmark<<endl; 
    
    float obtmark = english+urdu+math+cs+physics;
    cout<<"Obtain marks: "<<obtmark<<endl;
    
    int perc = (obtmark/Tmark)*100;
    cout <<"Percentage: "<<perc<<"%\n";

    switch(perc)
    {
        case 80 ... 90:
            cout<<"Grade: A++\n";
            break;

        case 70 ... 79:
            cout<<"Grade: A\n";
            break;

        case 60 ... 69:
            cout<<"Grade: B\n";
            break;

        case 50 ... 59:
            cout<<"Grade: C\n";
            break;

        case 40 ... 49:
            cout<<"Grade: D\n";
            break;

        default:
            cout<<"Grade: F (Fail)";
            break;
    }

    return 0;
}
