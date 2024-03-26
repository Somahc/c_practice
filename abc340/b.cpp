#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int q;
    cin >> q;
    vector<ll> a;

    rep(i, q)
    {
        ll x, y;
        cin >> x >> y;
        if (x == 1)
        {
            a.push_back(y);
        }
        else
        {
            cout << a[a.size() - y] << endl;
        }
    }
    return 0;
}