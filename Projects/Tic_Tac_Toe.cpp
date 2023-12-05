/*  Creating First Game : Tic Tac Toe.....  */

#include<iostream>

using namespace std;

#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

string player1;
string player2;
unsigned short input1, input2;
char board[3][3] = {{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}};

void display ();
void ask(int a);
void logic();
void check();
void Run();

int main()
{
    cout << UNDERLINE<< "\tWelcome to Tic Tac Toe Game" <<CLOSEUNDERLINE<<endl<<endl;
    cout << "Enter player 1 : ";
    cin >> player1;
    cout << "Enter player 2 : ";
    cin >> player2;
    Run();    
}



void display ()
{
    cout<<"   |   |   \n";
    cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" \n"; 
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" \n"; 
    cout<<"___|___|___\n";
    cout<<"   |   |   \n";
    cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" \n"; 
    cout<<"   |   |   \n";
}

void ask(int a)
{
    if (a == 1)
    {
        cout <<player1<<" : ";
        cin >>input1;
    }

    else if (a == 2)
    {
        cout <<player2<<" : ";
        cin >>input2;
    }    
}

void logic()
{
    if(input1 == input2)
    {
        cout<<"Invalid Input!!\nGame Over!!";
        exit(0);
    }
    if(input1 != input2)
    {  
        if ( (input1 >= 10) || (input2  >= 10) )
        {
        cout<<"Invalid Input!!\nGame Over!!";
        exit (0);
        }
        
        if( input1 == 1)
        {
            board[0][0] = 'X';
        }

        if( input2 == 1)
        {
            board[0][0] = 'O';
        }
        
        if( input1 == 2)
        {
            board[0][1] = 'X';
        }

        if( input2 == 2)
        {
            board[0][1] = 'O';
        }
        
        if( input1 == 3)
        {
            board[0][2] = 'X';
        }

        if( input2 == 3)
        {
            board[0][2] = 'O';
        }
        
        if( input1 == 4)
        {
            board[1][0] = 'X';
        }

        if( input2 == 4)
        {
            board[1][0] = 'O';
        }
        
        if( input1 == 5)
        {
            board[1][1] = 'X';
        }

        if( input2 == 5)
        {
            board[1][1] = 'O';
        }
        
        if( input1 == 6)
        {
            board[1][2] = 'X';
        }

        if( input2 == 6)
        {
            board[1][2] = 'O';
        }
        
        if( input1 == 7)
        {
            board[2][0] = 'X';
        }

        if( input2 == 7)
        {
            board[2][0] = 'O';
        }       
        
        if( input1 == 8)
        {
            board[2][1] = 'X';
        }

        if( input2 == 8)
        {
            board[2][1] = 'O';
        }       
        
        if( input1 == 9)
        {
            board[2][2] = 'X';
        }

        if( input2 == 9)
        {
            board[2][2] = 'O';
        }
    } 
    
    cout<< endl;
}

void check()
{
    // Checking Winner
    if ((board[0][0] == 'X')&&(board[0][1] == 'X')&&(board[0][2] == 'X'))
    {
        cout<<"CONGRATULATION!! \n"<<player1<<" WON! \n";
        exit(0);
    }
    if ((board[0][0] == 'O')&&(board[0][1] == 'O')&&(board[0][2] == 'O'))
    {
       cout<<"CONGRATULATION!! \n"<<player2<<" WON! \n";
        exit(0);
    }

    if ((board[1][0] == 'X')&&(board[1][1] == 'X')&&(board[1][2] == 'X'))
    {
        cout<<"CONGRATULATION!! \n"<<player1<<" WON! \n";
        exit(0);
    }
    if ((board[1][0] == 'O')&&(board[1][1] == 'O')&&(board[1][2] == 'O'))
    {
        cout<<"CONGRATULATION!! \n"<<player2<<" WON! \n";
        exit(0);
    }

    if ((board[2][0] == 'X')&&(board[2][1] == 'X')&&(board[2][2] == 'X'))
    {
        cout<<"CONGRATULATION!! \n"<<player1<<" WON! \n";
        exit(0);
    }
    if ((board[2][0] == 'O')&&(board[2][1] == 'O')&&(board[2][2] == 'O'))
    {
        cout<<"CONGRATULATION!! \n"<<player2<<" WON! \n";
        exit(0);
    }

    if ((board[0][0] == 'X')&&(board[1][0] == 'X')&&(board[2][0] == 'X'))
    {
        cout<<"CONGRATULATION!! \n"<<player1<<" WON! \n";
        exit(0);
    }
    if ((board[0][0] == 'O')&&(board[1][0] == 'O')&&(board[2][0] == 'O'))
    {
        cout<<"CONGRATULATION!! \n"<<player2<<" WON! \n";
        exit(0);
    }

    if ((board[0][1] == 'X')&&(board[1][1] == 'X')&&(board[2][1] == 'X'))
    {
        cout<<"CONGRATULATION!! \n"<<player1<<" WON! \n";
        exit(0);
    }
    if ((board[0][1] == 'O')&&(board[1][1] == 'O')&&(board[2][1] == 'O'))
    {
        cout<<"CONGRATULATION!! \n"<<player2<<" WON! \n";
        exit(0);
    }

    if ((board[0][2] == 'X')&&(board[1][2] == 'X')&&(board[2][2] == 'X'))
    {
       cout<<"CONGRATULATION!! \n"<<player1<<" WON! \n";
        exit(0);
    }
    if ((board[0][2] == 'O')&&(board[1][2] == 'O')&&(board[2][2] == 'O'))
    {
        cout<<"CONGRATULATION!! \n"<<player2<<" WON! \n";
        exit(0);
    }

    if ((board[0][0] == 'X')&&(board[1][1] == 'X')&&(board[2][2] == 'X'))
    {
        cout<<"CONGRATULATION!! \n"<<player1<<" WON! \n";
        exit(0);
    }
    if ((board[0][0] == 'O')&&(board[1][1] == 'O')&&(board[2][2] == 'O'))
    {
        cout<<"CONGRATULATION!! \n"<<player2<<" WON! \n";
        exit(0);
    }

    if ((board[0][2] == 'X')&&(board[1][1] == 'X')&&(board[2][0] == 'X'))
    {
        cout<<"CONGRATULATION!! \n"<<player1<<" WON! \n";
        exit(0);
    }
    if ((board[0][2] == 'O')&&(board[1][1] == 'O')&&(board[2][0] == 'O'))
    {
        cout<<"CONGRATULATION!! \n"<<player2<<" WON! \n";
        exit(0);
    }

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
    check();
    ask(2);
    logic();
    display(); 
    check();

    ask(1);
    logic();
    display();
    check();
    ask(2);
    logic();
    display(); 
    check();

    ask(1);
    logic();
    display();

    cout<<"Game Tie!!"; 

}
