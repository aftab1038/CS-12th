/*  SLO NO : 13.2.5
    SLO Name : Write a C++ program for adding subtracting multiplying two integer matrices of the order up to 4x4. */

#include <iostream>

using namespace std;

// Functions Declaration
void Addition(int A[4][4], int B[4][4]);
void Subtraction(int A[4][4], int B[4][4]);
void Multiplication(int A[4][4], int B[4][4]);

int main()
{  
    cout<<"Arithmetic Operations on 4 by 4 Matrices!"<<endl;

    // Variables Declaration 
    int matrix_1[4][4] = {
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };

    int matrix_2[4][4] = {
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };

    // Printing Matrices
    cout<<"Matrix 1 : "<<endl;
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<4; j++)
        {
            cout<<matrix_1[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Matrix 2 : "<<endl;
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<4; j++)
        {
            cout<<matrix_2[i][j]<<"\t";
        }
        cout<<endl;
    }

    // Functions Calling
    Addition(matrix_1, matrix_2);
    Subtraction(matrix_1, matrix_2);
    Multiplication(matrix_1, matrix_2);

    return 0;
}

// Function to add two matrices
void Addition(int A[4][4], int B[4][4])
{
    int Matrix3[4][4];

    cout<<"Matrix Addition : "<<endl;
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<4; j++)
        {
            Matrix3[i][j] = A[i][j] + B[i][j];
            cout<<Matrix3[i][j]<<"\t";
        }
        cout<<endl;
    }
}

// Function to subtract two matrices
void Subtraction(int A[4][4], int B[4][4])
{
    int Matrix3[4][4];

    cout<<"Matrix Subtraction : "<<endl;
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<4; j++)
        {
            Matrix3[i][j] = A[i][j] - B[i][j];
            cout<<Matrix3[i][j]<<"\t";
        }
        cout<<endl;
    }
}

// Function to multiply two matrices
void Multiplication(int A[4][4], int B[4][4]) {
    int Matrix_3[4][4];
    int num;

    cout<<"Matrix Multiplication : "<<endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            num = 0;
            for (int k = 0; k < 4; ++k) {
                num += A[i][k] * B[k][j];
            }
            Matrix_3[i][j] = num;
            cout<<num<<"\t";
        }
        cout<<endl;
    }
}