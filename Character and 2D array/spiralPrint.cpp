#include <iostream>
using namespace std;

void spiralPrint(int arr[][100], int nRows, int mCols)
{
    int sR = 0, eR = nRows - 1, sC = 0, eC = mCols - 1;

    while (sR <= eR && sC <= eC)
    {
        for (int i = sC; i <= eC; i++)
        {
            cout << arr[sR][i] << " ";
        }

        sR++;

        for (int j = sR; j <= eR; j++)
        {
            cout << arr[j][eC] << " ";
        }

        eC--;
        if (sC <= eC && sR <= eR)
        {
            for (int k = eC; k >= sC; k--)
            {
                cout << arr[eR][k] << " ";
            }
        }

        eR--;
        if (sR <= eR && sC <= eC)
        {
            for (int p = eR; p >= sR; p--)
            {
                cout << arr[p][sC] << " ";
            }
        }

        sC++;
    }
}

int main()
{

    int arr[100][100], m, n;

    cout << "Enter the rows and col : ";

    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    spiralPrint(arr, m, n);
}