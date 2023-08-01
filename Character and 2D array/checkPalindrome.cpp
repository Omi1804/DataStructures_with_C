#include<iostream>
using namespace std;

bool checkPalindrome(char ch[]){
int start=0,end=0;
//counting the length
for(int i =0 ;ch[i]!='\0';i++){
    end++;
}
end--;
while(start<end){
    if(ch[start]!=ch[end]){
        return false;
    }
        start++;
        end--;
}
return true;
}

int main(){
    int n = 1e6;
    char ch[n];
    cout<<"Enter"<<endl;
    cin>>ch;
    cout<<(checkPalindrome(ch)?"true":"false");
}