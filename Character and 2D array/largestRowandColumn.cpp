#include <iostream>
using namespace std;

void findLargestSumRow(int arr[][100], int rows, int col, int *sum1, int *rowNum)
{
    int temp = 0;
    for (int i = 0; i < rows; i++)
    {
        temp = 0;
        for (int j = 0; j < col; j++)
        {
            temp = temp + arr[i][j];
        }

        if (temp >= *sum1)
        {
            *sum1 = temp;
            *rowNum = i;
        }
    }
}

void findLargestSumCol(int arr[][100], int rows, int col, int *sum2, int *colNum)
{
    int temp = 0;
    for (int i = 0; i < col; i++)
    {
        temp = 0;
        for (int j = 0; j < rows; j++)
        {
            temp = temp + arr[j][i];
        }

        if (temp >= *sum2)
        {
            *sum2 = temp;
            *colNum = i;
        }
    }
}

void findLargest(int arr[][100], int rows, int col)
{
    int sum1 = 0, rowNum = 0, sum2 = 0, colNum = 0;

    findLargestSumRow(arr, rows, col, &sum1, &rowNum);
    findLargestSumCol(arr, rows, col, &sum2, &colNum);

    if (sum1 >= sum2)
    {
        cout << "row " << rowNum << " " << sum1;
    }
    else
    {
        cout << "col " << colNum << " " << sum2;
    }
}

int main()
{
    int arr[100][100], m, n;
    cout << "Enter number of rows and columns :";

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    findLargest(arr, m, n);
}