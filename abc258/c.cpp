#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int p = 0;
    rep(i, q)
    {
        int t, x;
        cin >> t >> x;
        if (t == 1)
        {
            p = (p - x + n) % n;
        }
        else
        {
            cout << s[(p + x - 1) % n] << '\n';
        }
    }
    return 0;
}