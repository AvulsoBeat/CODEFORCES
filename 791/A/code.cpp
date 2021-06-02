#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;

    int yearslatter = 0;

    // for (yearslatter = 0 ; a <= b; yearslatter++) {
    // }

    while(a <= b){
        a = a * 3;
        b = b * 2; 
        yearslatter++;
        // cout << a << " " << b << " "  << yearslatter << endl;
    }
    cout << yearslatter << endl;
    return 0;
}