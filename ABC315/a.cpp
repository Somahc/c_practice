#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
    string s, ans;
    cin >> s;
    rep(i, s.size()) {
        if(s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o') {
            ans += s[i];
        }
    }

    cout << ans << endl;
    return 0;
}