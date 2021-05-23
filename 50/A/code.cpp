#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    int n;
    cin >> m;
    cin >> n;

    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }

    int domino = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            // checa na direita
            if(a[i][j] == 0 && j+1 < n && a[i][j+1] == 0) {
                domino++;
                a[i][j] = 1;
                a[i][j+1] = 1;
            }
            // checa em baixo
            if (a[i][j] == 0 && i+1 < m && a[i+1][j] == 0){
                domino++;
                a[i][j] = 1;
                a[i+1][j] = 1;
            }
        }
    }

    cout << domino << endl;
    return 0;
}