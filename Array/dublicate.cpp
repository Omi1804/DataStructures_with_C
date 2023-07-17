#include<iostream>
using namespace std;

int dublicateNumber(int *arr, int size)
{
    int number,flag;
	for(int i=0;i<size;i++)
    {
        flag=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
                flag++;
        }
        if(flag==2)
            number=arr[i];
    }
    return number;
}

int main(){

    int size;
    cin>> size;
    int *input = new int[size];

    for(int i=0;i<size;i++){
        cin>>input[i];
    }

    cout<<dublicateNumber(input,size)<<endl;
    return 0;
}