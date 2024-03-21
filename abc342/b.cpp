#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n) cin >> p[i];
    int q;
    cin >> q;
    rep(i, q)
    {
        int a, b;
        cin >> a >> b;
        rep(j, n)
        {
            if (p[j] == a || p[j] == b)
            {
                cout << p[j] << endl;
                break;
            }
        }
    }
}