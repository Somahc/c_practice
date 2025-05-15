#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = 0;
    ll ans = 0;

    rep(i,n){
        cin >> a[i];
        sum += a[i];
    }

    rep(i, n-1){
        sum -= a[i];
        ans += a[i] * sum;
    }

    cout << ans << endl;
    return 0;
}