#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    if (s[0] != '<' || s.at(s.size() - 1) != '>')
    {
        cout << "No" << endl;
        return 0;
    }
    s = s.substr(1, s.size() - 2);
    // cout << s << endl;
    for (auto x : s)
    {
        if (x != '=')
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}