#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    map<int, int> mp;
    rep(i, q)
    {
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }
    int basshi = 0;
    for (auto p : mp)
    {
        if (p.second % 2 == 1)
        {
            basshi++;
        }
    }
    cout << n - basshi << endl;
    return 0;
}