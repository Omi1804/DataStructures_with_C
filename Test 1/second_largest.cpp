#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n, i=1, largest=INT_MIN, sec_largest=INT_MIN ;
    cout<< "Enter number of series : " <<endl;
    cin>>n;

    cout<<"Now Enter the series : " <<endl;
    while(i<=n){
        int num;
        cin>>num;

        if(num > largest){
            sec_largest = largest;
            largest = num;
        }else if(num < largest && num > sec_largest){
            sec_largest = num;
        }
        i++;
    }
    cout<<sec_largest;
}
