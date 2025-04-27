#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n,m;
    cin >> n >> m;
    vector<set<int>> a(m);
    rep(i, m) {
        int k;
        rep(j, k) {
            int tmp;
            cin >> tmp;
            a[i].insert(tmp);
        }

    }

    vector<int> b(n);
    rep(i,n) cin >> b[i];
    rep(ii, n) {
        int cnt = 0;

        rep(i,m){
            rep(j,a[i].size()) {
                if(a[i].count(b[j]) > 0) continue;
                else break;
            }
            cnt++;
        }
        cout << cnt << endl;
    }

    cout << endl;

}