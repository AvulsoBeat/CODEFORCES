#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();

    int qtdLetraRepetida = 0;

    for (int i = 0; i < n; i++){
        bool JaViantes = false;

        for(int j = 0; j < i; j++){
            if(s[j] == s[i]){
            JaViantes = true;
            }
        }

        if(!JaViantes){
            qtdLetraRepetida++;
        }

    }
    if(qtdLetraRepetida % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;

}

