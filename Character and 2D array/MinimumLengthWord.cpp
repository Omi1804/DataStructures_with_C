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
        if (input[i] == ' ' || i == 0 || i == size - 1)
        {
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