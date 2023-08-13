#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char *input)
{
    int size = strlen(input), low = 0, high;

    for (int i = 0; i < size; i++)
    {
        high = i - 1;
        if (input[i] == ' ' || i == 0 || i == size - 1)
        {
            while (low < high)
            {
                char temp = input[low];
                input[low] = input[high];
                input[high] = temp;
                low++;
                high--;
            }
        }
        low = i + 1;
    }
}

int main()
{
    int size = 10e6;
    char input[size];

    cin.getline(input, size);

    reverseEachWord(input);

    cout << input << endl;

    return 0;
}