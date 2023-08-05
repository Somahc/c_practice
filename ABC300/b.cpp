#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h), b(h);
    rep(i, h) cin >> a[i];
    rep(i, h) cin >> b[i];
    rep(s, h) {
        rep(t, w) {
            if(a == b) {
                cout << "Yes" << endl;
                return 0;
            }
            rep(i, h) rotate(a[i].begin(), a[i].begin()+1, a[i].end());
        }
        rotate(a.begin(), a.begin()+1, a.end());
    }
    cout << "No" << endl;
    return 0;
}