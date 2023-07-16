#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q, ans;
    cin >> n >> p >> q;
    vector<int> d(n);

    ans = p;

    for(int i=0; i<n; i++) {
        cin >> d[i];
        if((d[i] + q) < ans) ans = d[i] + q;
    }
    cout << ans << endl;
}