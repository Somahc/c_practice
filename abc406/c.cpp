#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> d;
    rep(i,n) {
        cin >> p[i];
    }
    
    rep(i, n-1) d.push_back((p[i] < p[i+1]) ? 0 : 1);
    vector<pair<char, int>> rle;
    for (int x : d) {
        if (rle.size() && rle.back().first == x) rle.back().second++;
        else rle.emplace_back(x, 1);
    }


    ll ans = 0;
    rep(i, rle.size()) {
        if (rle[i].first == 1) {
            ll l = 0, r = 0;
            if (i > 0 && i < rle.size() - 1) {
                l = rle[i-1].second;
                r = rle[i+1].second;
            }
            // if (i < rle.size() - 1) {
            // }
            ans += l * r;
        }
    }

    cout << ans << endl;
    return 0;
}