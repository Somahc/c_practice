#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main() {
    int n, x, c[101];
    vector<int> a[101];

    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> c[i];
        a[i].resize(c[i]);
        for(int j=0; j<c[i]; j++) {
            cin >> a[i][j];
        }
    }

    cin >> x;

    vector<int> vec;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<c[i]; j++) if(a[i][j] == x) {
            vec.push_back(i); // 優勝候補をvecに追加
        }
    }

    int cmin = 37;
    for(auto i : vec) cmin = min(cmin, c[i]);

    vector<int> ans;
    for(auto i : vec) if(c[i] == cmin) ans.push_back(i);

    cout << ans.size() << endl;
    for(auto i : ans) cout << i << " ";
    cout << endl;
}