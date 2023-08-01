#include <iostream>
using namespace std;

void printArray(int arr[][100], int rows, int colm)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[100][100], m, n;

    cout << "Enter num of rows and columns : ";

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    printArray(a, m, n);
}