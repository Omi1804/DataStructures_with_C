#include<iostream>
using namespace std;


int main(){
    int n,a,s=0;

    cout<<"Enter the number : ";
    cin>>n;

    while(n!=0){
        a=n%10;
        s= (s*10)+a;
        n=n/10; 
    }
    cout<<"The reverse number is : "<<s<<endl;
}