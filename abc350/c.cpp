#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define BOOL char
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<pair<int, int>> ans;
    rep(i, n) cin >> a[i + 1];
    for (int i = 1; i <= n; i++)
    {
        while (a[i] != i)
        {
            int j = a[i];
            swap(a[i], a[j]);
            ans.emplace_back(i, j);
        }
    }
    cout << ans.size() << endl;
    for (auto [i, j] : ans)
    {
        cout << i << " " << j << '\n';
    }

    return 0;
}