#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll s = 0, x, r;
    rep(i, n)
    {
        cin >> a[i];
        s += a[i];
    }
    x = s / n;
    r = s % n;
    vector<ll> b(n, x);
    rep(i, r) b[i]++;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll S = 0;
    rep(i, n)
    {
        S += abs(a[i] - b[i]);
    }
    cout << S / 2 << endl;
}