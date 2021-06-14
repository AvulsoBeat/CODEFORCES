#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int diferenciado = 'a' - 'A';
    int n = s.length();
    int qtdMiniculas = 0;
    int qtdMaiusculas = 0;

    for(int i = 0; i < n; i++){
         if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - diferenciado;
            qtdMiniculas++;
        } else {
            s[i] = s[i] + diferenciado;
            qtdMaiusculas++;
        }
     }

     if(qtdMaiusculas > qtdMiniculas){
         for(int i = 0; i < n; i++){
             if (s[i] >= 'a' && s[i] <= 'z'){
                 s[i] += 'A' - 'a'; 
             }
         }
     }
     else {
         if(qtdMaiusculas <= qtdMiniculas){
            for(int i = 0; i < n; i++){
                 if(s[i] >= 'A' && s[i] <= 'Z'){
                     s[i] -= 'A' - 'a';
                }
            }
        }
     }   
   
    
    cout << s << endl;
    return 0;
}