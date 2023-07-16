#include<iostream>
using namespace std;


int main(){
    int n,i=0,bin=0;
    cout<<"Entet the number : ";
    cin>>n;
    while(n!=0){
        int a = n % 2;
        bin = bin + (a*pow(10,i));
        i++;
        n=n/2;
    }
    cout<<bin;

}