#include <iostream>
using namespace std;

void printWave(int arr[][100], int rows, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < rows; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = rows - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main()
{
    int arr[100][100], m, n;

    cout << "Enter number of rows and col : ";
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    printWave(arr, m, n);
}