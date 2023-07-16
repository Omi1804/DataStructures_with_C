#include<iostream>
using namespace std;


int main(){
    cout<<"Enter the number : ";
    
    int n , i=1,a=1;
    cin>>n;

    while(i<=n){
        int cal = 3*a + 2;
        if(cal%4!=0)
        {
            cout<<cal<<" ";
            i++;
        }
        a++;
    }

}