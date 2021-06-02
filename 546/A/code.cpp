#include <bits/stdc++.h>
using namespace std;

int main(){
    int precoBanana;
    int oDinheiro;
    int qtdBanana;
    cin >> precoBanana;
    cin >> oDinheiro;
    cin >> qtdBanana;

    int emprestimo = 0;
    int precototal = 0;

    for(int i = 0; i <= qtdBanana; i++){
        precototal = precototal + precoBanana * i;
    }

    if(precototal == oDinheiro){
        cout << '0' << endl;
    }
    if(precototal > oDinheiro){
        emprestimo = precototal - oDinheiro;
        cout << emprestimo << endl;
    }
    if(precototal < oDinheiro){
        cout << '0' << endl;
    }
    return 0;
}