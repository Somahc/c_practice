#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    map<ll, ll> pasta, pasta_plan;

    rep(i, n)
    {
        cin >> a[i];
        pasta[a[i]]++;
    }
    rep(i, m)
    {
        cin >> b[i];
        pasta_plan[b[i]]++;
    }

    for (auto x : pasta_plan)
    {
        if (x.second > pasta[x.first])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}