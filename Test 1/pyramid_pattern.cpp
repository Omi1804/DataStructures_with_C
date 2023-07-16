#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cout<< "Enter the number : ";
    cin>>n;

    while(i<=n){
        int spaces = 1;
        while(spaces <= n-i){
            cout<<" ";
            spaces++;
        }
        int j=i;
        while(j>=1){
            cout<<j;
            j--;
        }
        int k=2;
        while(k<=i){
            cout<<k;
            k++;
        }
        i++;
        cout<<endl;
    }
}