#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n, t, p;
    cin >> n >> t >> p;
    vector<int> l(n);
    for(int i = 0; i < n; i++) cin >> l[i];

    sort(l.rbegin(), l.rend());

    if (t - l[p - 1] <= 0) {
        cout << "0" << endl;
        return 0;
    }
    cout << t - l[p - 1] << endl;
    return 0;

}