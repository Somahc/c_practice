#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    int cnt = 0, s_cnt = 0;
    for (auto c : t)
    {
        if (c == s[s_cnt])
        {
            cout << cnt + 1 << " ";
            s_cnt++;
        }
        cnt++;
    }
    cout << endl;

    return 0;
}