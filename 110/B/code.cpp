#include <bits/stdc++.h>
using namespace std;

bool talvezsejadasorte(int x){
    if (x == 0) {
        return false;
    }

    while( x > 0){
        int ultimonumero = x % 10;
        if (ultimonumero != 4 && ultimonumero != 7){
            return false;
        }
        x = x / 10;
    }
    return true;
}

int main(){
    string s;
    cin >> s;

    int n = s.length();
    int digitodasorte = 0;

    for(int i = 0; i < n; i++){
        char digito = s[i];
        if(digito == '4' || digito == '7'){
            digitodasorte++;
        }
    }
    bool numerodaSorte = talvezsejadasorte(digitodasorte);

    if(numerodaSorte){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}