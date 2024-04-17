#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, ans = 0;
    cin >> n;
    vector<int> a(n - 1);
    rep(i, n - 1)
    {
        cin >> a[i];
        ans += a[i];
    }
    cout << ans * -1 << endl;

    return 0;
}