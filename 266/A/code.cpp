#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int menos = 0;

    for(int i = 1; i < n; i++){


    if(s[i] == 'R' && s[i-1] == 'R' ){
        menos++;
    }
    if(s[i] == 'G' && s[i-1] == 'G'){
        menos++;
    }
    if(s[i] == 'B' && s[i-1] == 'B'){
        menos++;
    }
    }


    cout << menos << "\n";
    return 0;
}