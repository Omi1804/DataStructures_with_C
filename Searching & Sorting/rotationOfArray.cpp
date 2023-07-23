#include<iostream>
using namespace std;

void rotateArray(int *input, int d , int n){


     if(d==0 || d==n){
        return ;
    }

    int i=0,j=n-1;
    while(i<j){
        swap(input[i],input[j]);
        i++;
        j--;
    }

    i=0,j=n-d-1;
     while(i<j){
        swap(input[i],input[j]);
        i++;
        j--;
    }

    i=n-d;j=n-1;
     while(i<j){
        swap(input[i],input[j]);
        i++;
        j--;
    }

}