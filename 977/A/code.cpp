#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n;
    cin >> k;

    while(k > 0){
        if(n % 10 == 0){
            n = n / 10;
        } else {
            n = n - 1;
        }
        k--;
    }
    cout << n << endl;
    return 0;
}