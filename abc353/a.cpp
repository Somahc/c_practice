#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, cnt = 0;
    cin >> n;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    for (auto x : a)
    {
        if (x > a[0])
        {
            cout << ++cnt << endl;
            return 0;
        }
        cnt++;
    }

    cout << "-1" << endl;
    return 0;
}