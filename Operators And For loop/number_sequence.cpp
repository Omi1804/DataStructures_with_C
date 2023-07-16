#include<iostream>
using namespace std;


int main(){

    int n,i;

    cout<<"Enter the number of sequence : ";
    cin>>n;

    int curr_element ;
    bool isDecreasing = false, validity = true;
    cin>>curr_element;
    i=2;
    while(i<=n){
        int next_element;
        cin>>next_element;

        if(curr_element > next_element && isDecreasing && validity){
            curr_element= next_element;
            isDecreasing = true;
        }

        else if (curr_element < next_element && !isDecreasing ){
            curr_element= next_element;
            isDecreasing = false;
        }
        else{
            validity = false;
        }
        i++;
    }

    if(validity){
        cout<<"true";
    }else{
        cout<<"false";
    }
}