#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string word;
        cin >> word;

        if (word.size() > 10) {
            cout << word[0];
            cout << word.size() - 2;
            cout << word[word.size() - 1];
            cout << "\n";
        } else {
            cout << word << "\n";
        }
    }

    return 0;
}
