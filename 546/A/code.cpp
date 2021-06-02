#include <bits/stdc++.h>
using namespace std;

int main(){
    int precoBananas;
    int quantidadeDinheiro;
    int comprarBananas;
    cin >> precoBananas;
    cin >> quantidadeDinheiro;
    cin >> comprarBananas;

    int emprestimo = 0;
    int precoTotal = 0;

    for(int i = 1; i <= comprarBananas; i++){
        precoTotal = precoTotal + precoBananas * i;
    }

        if (precoTotal == quantidadeDinheiro){
        cout << '0' << endl;
         }

        if(precoTotal < quantidadeDinheiro){
            cout << '0' << endl;
        }

        if (precoTotal > quantidadeDinheiro){
        emprestimo = precoTotal - quantidadeDinheiro;
        cout << emprestimo << endl;
        }

        return 0;
}