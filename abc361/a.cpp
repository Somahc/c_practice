#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    a.insert(a.begin() + k, x);

    for (int tmp : a) cout << tmp << ' ';
    cout << endl;

    return 0;

}