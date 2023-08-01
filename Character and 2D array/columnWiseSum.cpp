#include <iostream>
using namespace std;

void columnWiseSum(int **arr, int rows, int col)
{

    int sum;

    for (int i = 0; i < col; i++)
    {
        sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << " ";
    }
}

int main()
{
    int rows, col;
    cout << "Enter Number of rows and col :";
    cin >> rows >> col;

    // Dynamically allocate memory for the 2D array
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[col];
    }

    cout << "Enter the elements :";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    columnWiseSum(arr, rows, col);

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
