#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int n,s;
    cin >> n >> s;
    vector<int> t(n+1, 0);

    const int thr = s + 1;

    for(int i = 1; i <= n; i++) {
        cin >> t[i];
    }

    rep(i,n) {
        if((t[i+1] - t[i]) >= thr) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}