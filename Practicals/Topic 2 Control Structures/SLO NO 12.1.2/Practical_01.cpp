// Code by AFTAB NAFEES
// GitHub : aftab1038

/*  SLO NO. : 12.1.2 
    SLO Name : Write a program using if-else and else-if Statement */

#include <iostream>

using namespace std;

int main()
{
    const float Tmark = 500;

    cout <<"Grade Detector!\n";

    float english;
    cout <<"Enter your English marks out of 75: ";
    cin>>english;
    
    float urdu;
    cout <<"Enter your Urdu marks out of 75: ";
    cin>>urdu;
    
    float math;
    cout <<"Enter your Maths marks out of 75: ";
    cin>>math;
    
    float cs;
    cout <<"Enter your Computer science marks out of 75: ";
    cin>>cs;
    
    float physics;
    cout <<"Enter your Physics marks out of 75: ";
    cin>>physics;
    
    cout<<"Total marks: "<<Tmark<<endl; 
    
    float obtmark = english+urdu+math+cs+physics;
    cout<<"Obtain marks: "<<obtmark<<endl;
    
    float perc = (obtmark/Tmark)*100;
    cout <<"Percentage: "<<perc<<"%\n";
    
    if(perc>=80)
    {
        cout<<"Grade: A+\n";
    }
    
    else if((perc>=70)&&(perc<80))
    {
        cout<<"Grade: A\n";
    }
    
    else if((perc>=60)&&(perc<70))
    {
        cout<<"Grade: B\n";
    }
    
    else if((perc>=50)&&(perc<60))
    {
        cout<<"Grade: C\n";
    }
    
    else if((perc>=40)&&(perc<50))
    {
        cout<<"Grade: D\n";
    }
    
    else 
    {
        cout<<"Grade: F\n";
    }
    
    return 0;
}
