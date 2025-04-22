#include <iostream>
using namespace std;

int main()
{
    int a[4][3] = {{9, 5, 7}, {1, 3, 6}, {5, 4, 1}, {0, 8, 2}};
    int b[3][4];

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            b[col][row] = a[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << b[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}
