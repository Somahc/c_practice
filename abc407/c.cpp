#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    string s;
    cin >> s;

    ll ans = 0;

    rep(i, s.size() - 1) {
        int gap_ten_from_next = 10 - (s[i + 1] - '0');

        ans += 1 + ((s[i] - '0') + gap_ten_from_next) % 10;
    }

    ans += 1 + (s[s.size() - 1] - '0');

    cout << ans << endl;


}