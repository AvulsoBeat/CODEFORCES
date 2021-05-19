#include <bits/stdc++.h>
using namespace std;

int main() {
    // entrada leitura
    int n;
    int k;
    cin >> n;
    cin >> k;
    
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // calcula, descobre, processa : output -> saída

    int result = 0;
    for(int i = 0; i < n; i++){
        if (a[i] > 0 && a[i] >= a[k-1]) {
            result++;
        }
    }

    cout << result << endl;
    return 0;
}
