#include<iostream>
using namespace std;


int main(){

    int i=1,n,j,space;
        cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=(n-i)+1)
        {
            cout<<j;
            j++;
        }
        space=1;
        while(space<=(2*i)-2)
        {
            cout<<"*";
            space++;
        }
        j--;
        while(j>=1)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }

}


