#include <iostream>
#include <cstring>

using namespace std;

void printAllSubstring(char ch[])
{
    int size = strlen(ch);

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << ch[k];
            }
            cout << endl;
        }
    }
}

int main()
{
    int size = 1e6;
    char ch[size];
    cout << "Enter the string : ";
    cin >> ch;
    printAllSubstring(ch);
}