#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{

    int n, m;
    cin >> n >> m;
    vector<int> h(n);
    rep(i, n)
    {
        cin >> h[i];
    }
    rep(i, n)
    {
        if (m - h[i] < 0)
        {
            cout << i << endl;
            return 0;
        }
        m -= h[i];
    }
    cout << n << endl;

    return 0;
}