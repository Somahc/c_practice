#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int n, X;
vector<int> a, b;

int main()
{
    cin >> n >> X;
    a = vector<int>(n);
    b = vector<int>(n);
    rep(i, n) cin >> a[i] >> b[i];

    vector dp(n + 1, vector<bool>(X + 101, false));
    dp[0][0] = true;
    rep(i, n)
    {
        rep(x, X + 1)
        {
            if (dp[i][x])
            {
                dp[i + 1][x + a[i]] = true;
                dp[i + 1][x + b[i]] = true;
            }
        }
    }

    if (dp[n][X])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}