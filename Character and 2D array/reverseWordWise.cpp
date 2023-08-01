#include <iostream>
using namespace std;

void reverseStringWordWise(char ch[])
{

    int size;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        size++;
    }

    int start = 0, end = size - 2;

    while (start < end)
    {
        char temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;
        start++;
        end--;
    }

    start = 0, end = 0;

    for (int i = 0; i <= size; i++)
    {
        if (ch[i] == ' ' || ch[i] == '\0')
        {

            end = i - 1;
            while (start < end)
            {
                char temp = ch[start];
                ch[start] = ch[end];
                ch[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main()
{
    cout << "Enter" << endl;
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}