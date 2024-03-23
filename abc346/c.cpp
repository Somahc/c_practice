#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    set<ll> st;
    ll ans = ((k + 1) * k) / 2;
    rep(i, n)
    {
        cin >> a[i];
        if (a[i] <= k)
        {
            // cout << a[i] << endl;
            if (!st.count(a[i]))
                ans -= a[i];
            st.insert(a[i]);
        }
    }
    cout << ans << endl;
    return 0;
}