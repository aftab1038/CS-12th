/*  SLO NO. : 13.3.3
    SLO Name : Write C++ program to perform various operations on string using string fucntions, i.e. strcpy, strcat, strlen and strcmp */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout<<"String Function!"<<endl<<endl;
    
    // strcpy function
    cout<<"strcpy function....."<<endl;
    char str1[20] = "AKHSS Batch 2024";
    char str2[20];
    cout<<"String 1 : "<<str1<<endl;
    cout<<"String 2 : "<<str2<<endl;
    strcpy(str2, str1);
    cout<<"String 1 copied to String 2 : "<<str2<<endl<<endl;
    
    // strcat function
    cout<<"strcat function....."<<endl;
    char str3 [5]= "Exam";
    char str4 [10] = "Practical";
    cout<<"String 1 : "<<str3<<endl;
    cout<<"String 2 : "<<str4<<endl;
    strcat(str3, str4);
    cout<<"Concatenate strings : "<<str3<<endl<<endl;
    
    // strlen function
    cout<<"strlen function....."<<endl;
    char str5[20] = "C++ Programming";
    int length = strlen(str5);
    cout<<"String : "<<str5<<endl;
    cout<<"String length : "<<length<<endl<<endl;
    

    // strcmp function
    cout<<"strcmp function....."<<endl;
    char str6[10] = "Computer";
    char str7[10] = "Science";
    int check = strcmp(str6, str7);
    cout<<"String 1 : "<<str6<<endl;
    cout<<"String 2 : "<<str7<<endl;
    if (check == 0)
    {
        cout<<"Comparing : String 1 and String 2 are same."<<endl;
    }
    else
    {
        cout<<"Comparing : String 1 and String 2 are not same."<<endl;
    }
    
    return 0;
}