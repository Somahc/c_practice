#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<string> s = {"#"};
    rep(ni, n)
    {
        int m = s.size(), m3 = m * 3;
        vector<string> t(m3, string(m3, '.'));
        rep(i, m3) rep(j, m3) t[i][j] = s[i % m][j % m];
        rep(i, m) rep(j, m) t[m + i][m + j] = '.';
        swap(s, t);
    }

    rep(i, s.size()) cout << s[i] << endl;
    return 0;
}