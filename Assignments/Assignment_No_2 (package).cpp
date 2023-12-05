#include <iostream>

using namespace std;

#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

int code = 0;
int code1;
int code2;

void back1();
void back2();
int main()
{
    cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Daily Packages\n2. Weekly Packages\n3. Monthly Packages\n0. Cancel\n";

    do {
        cout<<"\nEnter number : ";
        cin>>code;
        if (code >3 || code < 0) {
            cout<<"Invalid\n";
        }
    } while (code >3  || code <0);
    
    switch(code) 
    {
        case 0:
            cout<<"Cancelled\n";
            exit(0);
        case 1:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Daily Basic\n2. Daily Plus\n3. Daily  Premium\n0. Back\n";
            break;
        case 2:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Weekly Basic\n2. Weekly Plus\n3. Weekly  Premium\n0. Back\n";
            break;
        case 3:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Monthly Basic\n2. Monthly Plus\n3. Monthly  Premium\n0. Back\n";
            break;
    }
    
    do {
        cout<<"\nEnter number : ";
        cin>>code1;
        if (code1 >3 || code1 < 0) {
            cout<<"Invalid\n";
        }
    } while (code1 >3  || code1 <0);   
    
    switch (code1) 
    {   
        case 0:
            back1();
            exit(0);
   
        case 1:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Subscribe\n2. Unsubscribe\n0. Back\n";
            break;
        case 2:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Subscribe\n2. Unsubscribe\n0. Back\n";
            break;
        case 3:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Subscribe\n2. Unsubscribe\n0. Back\n";
            break;
    }
    
    do {
        cout<<"\nEnter number : ";
        cin>>code2;
        if (code2 >2 || code2 < 0) {
            cout<<"Invalid\n";
        }
    } while (code2 >3  || code2 < 0);  
    
    switch (code2)
    {
        case 0:
            back2();
            exit(0);
        case 1:
            cout<<"Package activated\n";
            break;
    
        case 2:
            cout<<"Package deactivated\n";
            break;
    }
}



// First back option
void back1()
{
    cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Daily Packages\n2. Weekly Packages\n3. Monthly Packages\n0. Cancel\n";

    do {
        cout<<"\nEnter number : ";
        cin>>code;
        if (code >3 || code < 0) {
            cout<<"Invalid\n";
        }
    } while (code >3  || code <0);
    
    switch(code) 
    {
        case 0:
            cout<<"Cancelled\n";
            exit(0);
        case 1:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Daily Basic\n2. Daily Plus\n3. Daily  Premium\n0. Back\n";
            break;
        case 2:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Weekly Basic\n2. Weekly Plus\n3. Weekly  Premium\n0. Back\n";
            break;
        case 3:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Monthly Basic\n2. Monthly Plus\n3. Monthly  Premium\n0. Back\n";
            break;
    }
    
    do {
        cout<<"\nEnter number : ";
        cin>>code1;
        if (code1 >3 || code1 < 0) {
            cout<<"Invalid\n";
        }
    } while (code1 >3  || code1 <0);   
    
    switch (code1) 
    {   
        case 0:
            break;
   
        case 1:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Subscribe\n2. Unsubscribe\n0. Back\n";
            break;
        case 2:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Subscribe\n2. Unsubscribe\n0. Back\n";
            break;
        case 3:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Subscribe\n2. Unsubscribe\n0. Back\n";
            break;
    }
    
    do {
        cout<<"\nEnter number : ";
        cin>>code2;
        if (code2 >2 || code2 < 0) {
            cout<<"Invalid\n";
        }
    } while (code2 >3  || code2 < 0);  
    
    switch (code2)
    {
        case 0:
            break; 
        case 1:
            cout<<"Package activated\n";
            break;
    
        case 2:
            cout<<"Package deactivated\n";
            break;
    }
}



// Second Back option
void back2()
{
    switch(code) 
    {
        case 0:
            cout<<"Cancelled\n";
            exit(0);
        case 1:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Daily Basic\n2. Daily Plus\n3. Daily  Premium\n0. Back\n";
            break;
        case 2:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Weekly Basic\n2. Weekly Plus\n3. Weekly  Premium\n0. Back\n";
            break;
        case 3:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Monthly Basic\n2. Monthly Plus\n3. Monthly  Premium\n0. Back\n";
            break;
    }
    
    do {
        cout<<"\nEnter number : ";
        cin>>code1;
        if (code1 >3 || code1 < 0) {
            cout<<"Invalid\n";
        }
    } while (code1 >3  || code1 <0);   
    
    switch (code1) 
    {   
        case 0:
            back1();
            exit(0);
   
        case 1:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Subscribe\n2. Unsubscribe\n0. Back\n";
            break;
        case 2:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Subscribe\n2. Unsubscribe\n0. Back\n";
            break;
        case 3:
            cout<<UNDERLINE<<"\tSCOM Packages\n"<<CLOSEUNDERLINE<<"1. Subscribe\n2. Unsubscribe\n0. Back\n";
            break;
    }
    
    do {
        cout<<"\nEnter number : ";
        cin>>code2;
        if (code2 >2 || code2 < 0) {
            cout<<"Invalid\n";
        }
    } while (code2 >3  || code2 < 0);  
    
    switch (code2)
    {
        case 0:
        
            break; 
        case 1:
            cout<<"Package activated\n";
            break;
    
        case 2:
            cout<<"Package deactivated\n";
            break;
    }
}