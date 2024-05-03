#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    rep(i, 3) t[i] = tolower(t[i]);
    // cout << t;

    auto is_subarray = [&](string x) -> bool
    {
        int xi = 0;
        for (char c : s)
        {
            if (c == x[xi])
                xi++;
            if (xi == x.size())
                return true;
        }
        return false;
    };

    if (is_subarray(t))
    {
        cout << "Yes" << endl;
        return 0;
    }
    if (t.back() == 'x')
    {
        t.pop_back();
        if (is_subarray(t))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
