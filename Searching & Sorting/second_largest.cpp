#include<iostream>
#include<algorithm>
using namespace std;

void secondlargest(int arr[], int size){

    sort(arr, arr+n);
    for(int i = size-1; i>=0 ;i--){
        if(arr[i]!=arr[i-1]){
            return arr[i];
            break;
        }
    }
}
