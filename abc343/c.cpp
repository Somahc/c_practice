#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
int cb(ll x)
{
    return x * x * x;
}

bool is_cb(ll x)
{
    return x >= 0 && cb((int)(cbrt(x) + 0.5)) == x;
}

bool is_kaibun(ll x)
{
    string s, s_rev;
    s = to_string(x);
    s_rev = s;
    reverse(s_rev.begin(), s_rev.end());
    return s == s_rev;
}

int main()
{
    ll n;
    cin >> n;
    // cout << (to_string(n).length() / 2 != 1) << endl;
    while (true)
    {
        cout << n << endl;
        if (!is_kaibun(n))
        {
            n--;
            continue;
        }

        if (is_cb(n))
        {
            cout << n << endl;
            return 0;
        }
        n--;
    }
}
