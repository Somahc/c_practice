#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    for (int i = 1; i <= 100; i++)
    {
        int kind = 0;
        for (auto x : mp)
        {
            if (x.second == i)
            {
                kind++;
            }
        }
        if (kind == 0 || kind == 2)
            continue;
        else
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
