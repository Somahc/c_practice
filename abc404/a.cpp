#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    string alphabets = "abcdefghijklmnopqrstuvwxyz";
    set<char> detekita;

    for (char c : s) {
        detekita.insert(c);
    }

    for(char a : alphabets) {
        if (!detekita.count(a)) {
            cout << a << endl;
            return 0;
        }
    }
}