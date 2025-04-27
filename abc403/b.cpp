#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    string t, u;
    cin >> t >> u;
    rep(i, t.length() - u.length() + 1) {
        // cout << i << endl;
        int correct = 0;

        rep(j,u.length()) {
            if (t[i+j] != u[j] && t[i+j] != '?') break;
            correct++;
        }

        if (correct == u.length()) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}