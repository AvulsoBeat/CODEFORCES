#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();

    int letraRepitida = 0;

    for(int i = 0; i < n; i++){
        bool jaViAntes = false;

        for (int j = 0; j < i; j++){
            if(s[j] == s[i]){
            jaViAntes = true;
             }
        }

        if(!jaViAntes){
         letraRepitida++;
        }
    }


    if(letraRepitida % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}

