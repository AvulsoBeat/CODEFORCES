#include <bits/stdc++.h>
using namespace std;

   
int main(){
    string s;
    cin >> s;
    int n = s.length();

    int x1 = 0;
    int x2 = 0;
    int x3 = 0;

    for(int i = 0; i < n; i++){
        if (s[i] == '1'){
            x1++;
        }
        if (s[i] == '2'){
            x2++;
        }
        if (s[i] == '3'){
            x3++;
        }
    }

    string separador = "";
    while (x1 > 0){
        x1--;
        cout << separador << "1";
        separador = "+";
    }
    while (x2 > 0){
        x2--;
        cout << separador << "2";
        separador = "+";
    }
    while (x3 > 0){
        x3--;
        cout << separador << "3";
        separador = "+";
    }

    cout << "\n";
    return 0;
}