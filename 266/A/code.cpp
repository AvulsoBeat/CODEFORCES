#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int menos = 0;

    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            menos++;
        }
    }

    cout << menos << "\n";
    return 0;
}