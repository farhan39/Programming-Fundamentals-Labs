//problem 4...............21L-5247
#include <iostream>
using namespace std;
 
void rotatematrix(int m, int n, int mat[5][5])
{
    int row = 0, col = 0;
    int previous, current;
 
    /*
    row - Starting row index
    m - ending row index
    col - starting column index
    n - ending column index
    i - iterator
    */
    while (row < m && col < n)
    {
 
 
        // Store the first element of next row, this
        // element will replace first element of current
        // row
        previous = mat[row + 1][col];
 
        /* Move elements of first row from the remaining rows */ 
        for (int i = col; i < n; i++)
        {
            current = mat[row][i];
            mat[row][i] = previous;
            previous = current;
        }
        row++;
 
        /* Move elements of last column from the remaining columns */
        for (int i = row; i < m; i++)
        {
            current = mat[i][n-1];
            mat[i][n-1] = previous;
            previous = current;
        }
        n--;
 
        /* Move elements of last row from the remaining rows */
        if (row < m)
        {
            for (int i = n-1; i >= col; i--)
            {
                current = mat[m-1][i];
                mat[m-1][i] = previous;
                previous = current;
            }
        }
        m--;
 
        /* Move elements of first column from the remaining rows */
        if (col < n)
        {
            for (int i = m-1; i >= row; i--)
            {
                current = mat[i][col];
                mat[i][col] = previous;
                previous = current;
            }
        }
        col++;
    }
 
    // Printing rotated matrix
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        cout << mat[i][j] << " ";
        cout << endl;
    }
}


int main()
{
    
    // int a[5][5] , rows=0, columns=0;
    // cout<<"Enter elements of a 5 by 5 matrix "<<endl;
    // for (int i=0;i<5;i++)
    // {
    //     for (int j=0;j<5;j++)
    //     cin>>a[i][j];
    // }
    // rotatematrix(5, 5, a);
    // return 0;
    cout <<" ;laksjf;";
}
