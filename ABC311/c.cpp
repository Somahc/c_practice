#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); i++)

// n回グラフを辿れば必ずサイクルに入るから、とりあえずn回辿ってサイクルに入る
int main() {
    int n;
    cin >> n;
    vector<int> a(n+1);
    rep(i,n) cin >> a[i+1];

    int v = 1;
    rep(i,n) {
        v = a[v];
        // cout << a[v] << endl;
    }
    int sv = v;
    vector<int> ans;
    do {
        ans.push_back(v);
        v = a[v];
    } while(v != sv);

    cout << ans.size() << endl;
    for(int v : ans) cout << v << endl;
    cout << endl;
    return 0;
}