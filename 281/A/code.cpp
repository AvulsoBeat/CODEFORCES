#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int diff = 'a' - 'A';

    if( s[0] >= 'a' && s[0] <= 'z'){
        s[0] = s[0] - diff;
    }

    // int n = s.length();

    // for(int i = 0; i < n; i++){
    //     if(s[0]== diff){

    //     }
    // }
    cout << s << "\n";
    return 0;
}