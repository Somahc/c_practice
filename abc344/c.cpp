#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, m, l, q;
    vector<ll> a, b, c, x;
    set<ll> sum_set;

    cin >> n;
    rep(i, n)
    {
        ll tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    a.resize(n);

    cin >> m;
    rep(i, m)
    {
        ll tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    b.resize(m);

    cin >> l;
    rep(i, l)
    {
        ll tmp;
        cin >> tmp;
        c.push_back(tmp);
    }
    c.resize(l);

    cin >> q;
    rep(i, q)
    {
        ll tmp;
        cin >> tmp;
        x.push_back(tmp);
    }
    x.resize(q);

    rep(i, n) rep(j, m) rep(k, l)
    {
        sum_set.insert(a[i] + b[j] + c[k]);
    }

    for (auto tmp : x)
    {
        if (sum_set.count(tmp))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}