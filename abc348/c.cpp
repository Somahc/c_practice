#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    // vector<pair<ll, ll>> beans(n);
    map<ll, ll> beans;
    ll ans = 0, max_oic = 0;
    rep(i, n)
    {
        // cin >> beans[i].first >> beans[i].second;
        ll a, c;
        cin >> a >> c;
        if (beans[c] > a || !beans[c])
        {
            // beans.insert(pair{a, c});
            beans[c] = a;
        }
    }
    for (auto x : beans)
    {
        // cout << x.first << " " << x.second << endl;
        if (max_oic < x.second)
        {
            max_oic = x.second;
            ans = x.second;
        }
    }
    cout << ans << endl;
    return 0;
}