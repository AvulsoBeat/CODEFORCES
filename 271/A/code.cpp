#include <bits/stdc++.h>
using namespace std;

bool ehUmAnoBao(int ano) {
    int digits[10];
    for (int i = 0; i <= 9; i++) {
        digits[i] = 0;
    }

    while (ano > 0) {
        int ultimoDigito = ano % 10;
        digits[ultimoDigito]++;
        ano /= 10;
    }

    for (int i = 0; i <= 9; i++) {
        if (digits[i] > 1) {
            return false;
        }
    }
    return true;
}

int main(){
    int y;
    cin >> y;

   int anoresposta = y+1;
    while (ehUmAnoBao(anoresposta) == false) {
        anoresposta++;
    }
    
    cout << anoresposta << endl;
    return 0;
}
// bool ehUmAnoBemBom(int ano) {
//     int ultimoDigito = ano % 10;
//     int penultimoDigito = (ano / 10) % 10;
//     int antepenultimoDigito = (ano / 100) % 10;
//     int primeiroDigito = (ano / 1000) % 10;

//     if (ultimoDigito == penultimoDigito || ultimoDigito == antepenultimoDigito || ultimoDigito == primeiroDigito) {
//         return false;
//     }

//     if (penultimoDigito == antepenultimoDigito || penultimoDigito == primeiroDigito) {
//         return false;
//     }

//     if (antepenultimoDigito == primeiroDigito) {
//         return false;
//     }

//     return true;
// }

// bool numerodistindo(int y){
//     int digito = 0;
//     if(digito != y){
//         digito++;
//         return true;
//     }
//     return false;
// }
