#include <iostream>
#include <cstring>
using namespace std;

void removingConsecutiveDuplicate(char input[])
{
    char ch[100];
    int a = 0;

    // The loop to remove consecutive duplicates
    for (int i = 0; i < strlen(input); i++)
    {
        char c = input[i];
        if (i == 0 || c != input[i - 1])
        {
            ch[a] = c;
            a++;
        }
    }
    ch[a] = '\0';

    strcpy(input, ch);
}

int main()
{
    const int size = 100;
    char input[size];

    cin.getline(input, size);

    removingConsecutiveDuplicate(input);

    cout << input << endl;

    return 0;
}
