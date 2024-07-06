#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> a(2 * n);
    rep(i, 2 * n)
    {
        cin >> a[i];
    }
    for (int i = 1; i < 2 * n - 1; i++)
    {
        if (a[i] != a[i - 1] and a[i - 1] == a[i + 1])
            ans++;
    }
    cout << ans << endl;
    return 0;
}