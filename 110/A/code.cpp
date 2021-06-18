#include <bits/stdc++.h>
using namespace std;

bool ehUmNumeroDaSorte(int x) {
    if (x == 0) {
        return false;
    }

    while (x > 0) {
        int ultimoDigito = x % 10;
        if (ultimoDigito != 4 && ultimoDigito != 7) {
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
    int quantosDigitosDaSorteEuAchei = 0;

    for(int i = 0; i < n; i++){
        char digit = s[i];

        if (digit == '4' || digit == '7') {
            quantosDigitosDaSorteEuAchei++;
        }
    }

    bool eleEhDaSorte = ehUmNumeroDaSorte(quantosDigitosDaSorteEuAchei);

    if(eleEhDaSorte){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}