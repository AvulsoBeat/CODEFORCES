#include <bits/stdc++.h>
using namespace std;

bool minhafuncao(string s, string t){
    int n = s.length();
    int x = t.length();

        for(int i = 0; i < n; i++){
           
                int j = (n-1) - i;
                if(s[i] != t[j]){
                    return false;
                }
            
        }
        return true;
}

int main(){
    string s;
    string t;
    cin >> s;
    cin >> t;
   

    if(minhafuncao(s, t)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
  
    

    return 0;
}

