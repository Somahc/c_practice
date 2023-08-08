#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main() {
    int n, t;
    cin >> n >> t;

    vector<pair<int, int>> c(n);

    rep(i, n) {
        int tmp;
        cin >> tmp;
        c[i].first = tmp;
    }

    rep(i, n) {
        int tmp;
        cin >> tmp;
        c[i].second = tmp;
    }

    int ans = -1, player = 1, anss = -1;
    for(auto x : c) {
        if(x.first == t && x.second > ans) {
            ans = x.second;
            anss = player;
        }
        player++;
    }

    if(ans != -1) {
        cout << anss << endl;
        return 0;
    }else{
        anss = 1;
        player = 1;
        ans = c[0].second;
        for(auto x : c) {
            if(x.first == c[0].first && x.second > ans) {
                ans = x.second;
                anss = player;
            }
            ++player;
        }
        cout << anss << endl;
        return 0;
    }
}