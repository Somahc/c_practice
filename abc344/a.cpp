#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s, ans = "";
    int tmp = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '|')
        {
            tmp++;
        }
        if (s[i] != '|' and tmp % 2 == 0)
        {
            ans += s[i];
        }
    }
    cout << ans << endl;
}