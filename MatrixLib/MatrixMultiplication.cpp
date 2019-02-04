#include <iostream>
using namespace std; 
int main ()
{
    int r1, c1, r2, c2, i, j, k;
    int A[10][10], B[10][10], C[10][10]; //putting limitation of 10x10 matrix
    cout << "Enter number of rows and columns of matrix A : ";
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns of matrix B : ";
    cin >> r2 >> c2; 
    if (c1 != r2) //Only Matrices with c1 == r2 can be multiplied
    {
        cout << "Matrices cannot be multiplied!";
        exit(0);
    }	
    cout << "Enter elements of matrix A : ";
    for (i = 0; i < r1; i++) //tranversing through rows
        for (j = 0; j < c1; j++) //transversing through columns
            cin >> A[i][j];
    cout << "Enter elements of matrix B : ";
    for (i = 0; i < r2; i++) //tranversing through rows
        for (j = 0; j < c2; j++) //tranversing through columns
            cin >> B[i][j];		
    for (i = 0; i < r1; i++) //multiplication algorthims
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < r2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Product of matrices\n";
    for (i = 0; i < r1; i++)
    {    
        for (j = 0; j < c2; j++)
            cout << C[i][j] << "  ";
        cout << "\n";
    }
    return 0;
}
