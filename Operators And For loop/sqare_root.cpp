#include <iostream>
using namespace std;

int main() {
    int n, i, sq = 0;
    cout << "Enter the number: ";
    cin >> n;

    for (i = 1; i * i <= n; i++) {
        sq = i * i;
        if (sq == n) {
            break;
        }
    }

    if(i*i>n){
        cout<< --i;
    }else {
        cout<< i;
    }

    return 0;
}
