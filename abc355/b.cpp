#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c;
    set<int> a_set;
    rep(i, n)
    {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
        a_set.insert(tmp);
        c.push_back(a[i]);
    }
    rep(i, m)
    {
        cin >> b[i];
        c.push_back(b[i]);
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < n + m - 1; i++)
    {
        if (a_set.count(c[i]) && a_set.count(c[i + 1]))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}