#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    int a[3][3] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
    bool isMagicSquare = true;
    int rows = 3;
    int cols = 3;
    if (rows != cols)
    {
        isMagicSquare = false;
    }
    int diag_1 = 0;
    int diag_2 = 0;
    int row_sum = 0;
    int col_sum = 0;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            row_sum = row_sum + a[row][col];
            col_sum = col_sum + a[col][row];
            if (row == col)
            {
                diag_1 = diag_1 + a[row][col];
            }
        }
    }
    if (row_sum != col_sum)
    {
        isMagicSquare = false;
    }

    int row = 0;
    int col = 2;
    while (row < 3)
    {
        diag_2 = diag_2 + a[row][col];
        row++;
        col--;
    }
    if(diag_1 != diag_2){
        isMagicSquare = false;
    }
    cout<<boolalpha;
    cout<<isMagicSquare<<endl;
return 0;
}
