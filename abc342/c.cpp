#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int q;
    cin >> q;
    string from, to;
    from = to = "abcdefghijklmnopqrstuvwxyz";
    rep(i, q)
    {
        char c, d;
        cin >> c >> d;
        rep(i, 26)
        {
            if (to[i] == c)
                to[i] = d;
        }
    }

    for (auto c : s)
    {
        bool found = false;
        rep(i, 26)
        {
            if (c == from[i])
            {
                cout << to[i];
                found = true;
                break;
            }
        }
        if (!found)
            cout << c;
    }
    cout << endl;
    return 0;
}