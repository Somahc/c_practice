#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    vector<ll> a;
    cin >> n;
    a.resize(n);
    rep(i, n)
    {
        ll tmp;
        cin >> tmp;
        a[i] = tmp;
    }
    ll bus = 0;
    for (auto x : a)
    {
        bus += x;
        if (bus < 0)
        {
            bus = 0;
        }
    }
    cout << bus << endl;
    return 0;
}