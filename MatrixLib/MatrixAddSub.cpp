#include <iostream>
using namespace std;

void matrixAddition() {
    cout << endl << "Matrix Addition :" << endl;
    int r, c, a[20][20], b[20][20], sub[20][20], i, j;

    cout << "Enter number of rows (between 1 and 20): ";
    cin >> r;

    cout << "Enter number of columns (between 1 and 20): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

   
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sub[i][j] = a[i][j] + b[i][j];

  
    cout << endl << "Subtraction of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sub[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

}

void matrixSubtraction() {
  cout << endl << "Matrix Subtraction :" << endl;
   int r, c, a[20][20], b[20][20], sub[20][20], i, j;

    cout << "Enter number of rows (between 1 and 20): ";
    cin >> r;

    cout << "Enter number of columns (between 1 and 20): ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

   
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sub[i][j] = a[i][j] - b[i][j];

  
    cout << endl << "Subtraction of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sub[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

}

int main()
{
    //calling the matrix addtion
    //matrixAddition();
    matrixSubtraction();
    return 0;
}