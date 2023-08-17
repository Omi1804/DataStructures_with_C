#include <iostream>
#include <cstring>
using namespace std;

void printMinimumLengthString(char input[])
{
    int size = strlen(input);
    cout << size << endl;
    int smallest = 0;

    for (int i = 0; i < size; i++)
    {
        if (i == size - 1 || input[i] == ' ')
        {
            wordEndIndex = i;
        }
    }
}

int main()
{
    int size = 100;
    char input[size];

    cin.getline(input, size);

    printMinimumLengthString(input);
}