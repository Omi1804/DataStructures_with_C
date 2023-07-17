#include<iostream>
using namespace std;


void arrange(int arr[], int size){

    int odd = 0, even  = size-1, index = 0;
    while(index<size){

        if((index+1)%2!=0){
            arr[odd] = index+1;
            odd++;
        }else{
            arr[even] = index+1;
            even--;
        }

        index++;
    }

}

int main(){
    int n , num;
    cout<<"Enter the size of the array : ";
    cin>>n;
   	int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
}