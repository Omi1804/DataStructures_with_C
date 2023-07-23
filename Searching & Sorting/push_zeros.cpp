#include<iostream>
using namespace std;

void pushZeros(int *input , int size){

    int a=0;

    for(int i =0 ;i < size; i++){
        if(input[i]!=0){
            swap(input[i],input[a]);
            a++;
        }
    }
}