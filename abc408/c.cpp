#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> wall(n+1, 0);
    int ans = 999999999;

    rep(i,m) {
        int l, r;
        cin >> l >> r;
        l--;
        wall[l]++;
        wall[r]--;
    }

    rep(i,n) {
        if (i > 0) wall[i] += wall[i-1];

        ans = min(ans, wall[i]);
    }

    cout << ans << endl;
    return 0;
}