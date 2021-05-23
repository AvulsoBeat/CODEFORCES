#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int X;
    cin >> n;
    X = 0;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        // cout << s << "\n";
        if( (s[0] == 'X' && s[1] == '+' && s[2] == '+') || 
            (s[0] == '+' && s[1] == '+' && s[2] == 'X')){
            X++;
        }
        else {
            X--;
        }
       

    }
    
    cout <<  X << "\n";
    
    return 0;
}