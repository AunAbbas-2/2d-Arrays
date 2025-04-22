#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum[3] = {0, 0, 0};

    for (int col = 0; col < 3; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            sum[col] = sum[col] + a[row][col];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << sum[i] << " ";
    }
    return 0;
}
