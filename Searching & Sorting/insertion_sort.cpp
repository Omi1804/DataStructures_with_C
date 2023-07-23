#include<iostream>
using namespace std;


void insertionSort(int input[],int size){

    int j;
    for(int i =0;i<size;i++){

        int temp = input[i];

        for( j=i-1; j>=0;j--){

            if(input[j]>temp){
                input[j+1]=input[j];
            }
            else{
                break;
            }
        }
        input[j+1]=temp;
    }

}


int main(){
    
}