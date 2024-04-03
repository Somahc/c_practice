#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

int main()
{
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;

    int ans = 0;
    if (m >= x)
    {
        cout << t << endl;
        return 0;
    }
    ans = t - (x - m) * d;

    cout << ans << endl;
    return 0;
}