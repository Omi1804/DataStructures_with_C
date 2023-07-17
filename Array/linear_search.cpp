#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int num){
    if(size == 0){
        return -1;
    }
    for(int i =0 ; i<size; i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}


int main(){
    int n , num;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements : ";
    for(int i =0; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the value to search : ";
    cin>>num;

    cout<<"The index of the number is : "<<linearSearch(arr,n,num)<<endl;

}