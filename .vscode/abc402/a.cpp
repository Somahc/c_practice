#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    for (char c : s) if (isupper(c)) cout << c;

    cout << endl;
}