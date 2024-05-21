#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    ll total = 0;

    rep(i, n)
    {
        cin >> a[i] >> b[i];
        total += a[i];
    }
    ll ans = -1;
    rep(i, n)
    {
        ans = max(ans, total - a[i] + b[i]);
    }
    cout << ans << endl;
    return 0;
}