#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int qtdAtualdepassageiro = 0;
    int qtdMaiorPassageiros = 0;

  for (int estacao = 1; estacao <= n; estacao++){
        int entrou, saiu;
        cin >> saiu;
        cin >> entrou;

        qtdAtualdepassageiro -= saiu;
        qtdAtualdepassageiro += entrou;

        if(qtdAtualdepassageiro > qtdMaiorPassageiros){
            qtdMaiorPassageiros = qtdAtualdepassageiro;
    }
  }
    cout << qtdMaiorPassageiros << endl;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int qtdMaiorPassageiros = 0;
//     int qtdAtualdepassageiro = 0

//     for (int i = 0; i < n; i++){
//         for(qtdMaiorPassageiros = 0; qtdMaiorPassageiros < qtdAtualdepassageiro)
//         // for (int j = 0; j < n; j++){
//         int entrou, saiu;
        
//         cin >> entrou;
//         cin >> saiu;

//         if(capMinima = capMinima < saiu[i] && capMinima < entrou[i] ){
//         }


        
//         // }
//     }

//     cout << capMinima << endl;
//     return 0;
// }