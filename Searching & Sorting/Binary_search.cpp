#include<iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x){
    if(left==right){
        return -1;
    }
    int mid;
    while(left<=right){
        mid=(left+right)/2;

        if(arr[mid]==x){
            return mid;
        }
        else if (arr[mid]<x){
            left = mid+1;
        }
        else if(arr[mid]>x){
            right = mid-1;
        }
    }
    return -1;
}

int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int left = 0;
    int right =n-1;
    int target;
    cin>>target;


    int ans = binarySearch(arr, 0, n-1, target);


    cout<<ans;



}