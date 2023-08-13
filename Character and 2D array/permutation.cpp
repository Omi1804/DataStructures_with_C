#include <iostream>
#include <cstring>
using namespace std;

bool checkPermutation(char input1[], char input2[])
{
    int freqArray[256] = {0}, ascii;

    if (strlen(input1) != strlen(input2))
    {
        return false;
    }
    else
    {
        // Applying the frequency Array technique
        for (int i = 0; i < strlen(input1); i++)
        {
            ascii = input1[i]; // Regestering all the characters to the freqarray of input1
            freqArray[ascii]++;
        }

        for (int j = 0; j < strlen(input2); j++)
        {

            ascii = input2[j];
            freqArray[ascii]--;
        }

        for (int k = 0; k < 256; k++)
        {
            if (freqArray[k] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int size = 10e6;
    char str1[size];
    char str2[size];

    cin >> str1 >> str2;

    cout << (checkPermutation(str1, str2)) ? "true" : "false";
}