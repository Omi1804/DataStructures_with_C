
#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
  int a=0;
  for(int i=0;i<size;i++){
    if(input[i]==0){
      int temp=input[a];
      input[a]=input[i];
      input[i]=temp;
      a++;
    }
  }
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int input[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
	}

	return 0;
}