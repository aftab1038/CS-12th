#include<iostream>
using namespace std;

string X;
string Y;
unsigned short inputX, inputY;
char board[3][3] = {{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}};
void display ()
{
    cout<<"   |   |   \n";
    cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" \n"; 
    cout<<"   |   |   \n";
    cout<<"————————————\n";
    cout<<"   |   |   \n";
    cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" \n"; 
    cout<<"   |   |   \n";
    cout<<"————————————\n";
    cout<<"   |   |   \n";
    cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" \n"; 
    cout<<"   |   |   \n";
}

void ask(int a)
{
    if (a == 1)
    {
        cout <<X<<" : ";
        cin >>inputX;
    }

    else if (a == 2)
    {
        cout <<Y<<" : ";
        cin >>inputY;
    }    
}

void logic()
{
    if(inputX == inputY)
    {
        cout << "Invalid!!!";
        exit(0);
    }
    if(inputX != inputY)
    {  
        if ( (inputX >= 10) || (inputY  >= 10) )
        {
        cout<<"Invalid";
        exit (0);
        }
        
        if( inputX == 1)
        {
            board[0][0] = 'X';
        }

        if( inputY == 1)
        {
            board[0][0] = 'Y';
        }
        
        if( inputX == 2)
        {
            board[0][1] = 'X';
        }

        if( inputY == 2)
        {
            board[0][1] = 'Y';
        }
        
        if( inputX == 3)
        {
            board[0][2] = 'X';
        }

        if( inputY == 3)
        {
            board[0][2] = 'Y';
        }
        
        if( inputX == 4)
        {
            board[1][0] = 'X';
        }

        if( inputY == 4)
        {
            board[1][0] = 'Y';
        }
        
        if( inputX == 5)
        {
            board[1][1] = 'X';
        }

        if( inputY == 5)
        {
            board[1][1] = 'Y';
        }
        
        if( inputX == 6)
        {
            board[1][2] = 'X';
        }

        if( inputY == 6)
        {
            board[1][2] = 'Y';
        }
        
        if( inputX == 7)
        {
            board[2][0] = 'X';
        }

        if( inputY == 7)
        {
            board[2][0] = 'Y';
        }       
        
        if( inputX == 8)
        {
            board[2][1] = 'X';
        }

        if( inputY == 8)
        {
            board[2][1] = 'Y';
        }       
        
        if( inputX == 9)
        {
            board[2][2] = 'X';
        }

        if( inputY == 9)
        {
        board[2][2] = 'Y';
        }
    } 
    
    cout<< endl;
}
void Run()
{
    display();
    ask(1);
    logic();
    display();
    ask(2);
    logic();
    display();
    
    ask(1);
    logic();
    display();
    ask(2);
    logic();
    display();
    
    ask(1);
    logic();
    display();
    ask(2);
    logic();
    display();    
    

}
int main()
{
    cout << "Welcome to Tic Tac Toe Game " << endl;
    cout << "Enter player 1 : ";
    cin >> X;
    cout << "Enter player 2 : " <<Y;
    cin >> Y;
    Run();    
    
    
    
}