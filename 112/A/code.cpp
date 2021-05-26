#include <bits/stdc++.h>
using namespace std;

int validate(){
    string a;
    string b;
    cin >> a;
    cin >> b;
    int diff = 'a' - 'A';
    int n = b.length();

    for(int i = 0; i < n; i++){
        //char c = a[i];
        if(a[i] >= 'A' && a[i] <= 'Z' ){
            a[i] = a[i] + diff;
        }
        if(b[i] >= 'A' && b[i] <= 'Z'){
            b[i] = b[i] + diff;
        }

        if(a[i] < b[i]){
            return -1;
        }
        if(a[i] > b[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
   int result;
   result = validate();

    cout << result << "\n";
    return 0;
}
