#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){

    for(int i =0 ;i<size; i++){
        int min=arr[i],minPos = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                min=arr[j];
                minPos=j;
            }
        }
        int temp = arr[i];
        arr[i]= arr[minPos];
        arr[minPos]=temp;
    }
}