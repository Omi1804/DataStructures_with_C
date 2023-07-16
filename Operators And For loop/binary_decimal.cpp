#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,num=0,i=0;
    cout<<"Enter the binary number : ";
    cin>>n;

    while(n!=0){
        int a = n%10;
        num = num + (pow(2,i)*a);
        i++;
        n=n/10;
    }
    cout<<num;
}