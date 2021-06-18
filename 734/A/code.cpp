#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int Anton = 0;
    int Danik = 0;
    
    for(int j = 0; j < n; j++){
        if(s[j] == 'A'){
            Anton++;
        }
        if(s[j] == 'D'){
            Danik++;
        }
    }

    if(Anton == Danik){
        cout << "Friendship" << endl;
    }

    if(Danik > Anton){
        cout << "Danik" << endl;
    } 
    if(Anton > Danik){
        cout << "Anton" << endl;
    }
    return 0;
}
    