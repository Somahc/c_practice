#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> wall;

    rep(i,m) {
        int l,r;
        cin >> l >> r;
        l--, r--;
        rep(j, r-l) {
            wall[j]++;
        }
    }

    int ans = 999999999;

    rep(i,n) {
        ans = min(wall[i], ans);
    }

    cout << ans << endl;
    return 0;
}