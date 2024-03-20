#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int h, w, n;
    string t, s[505];

    cin >> h >> w >> n;
    cin >> t;
    for (int i = 1; i <= h; i++)
        cin >> s[i];

    int ans = 0;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == '#')
                continue;
            int I = i, J = j;
            bool ok = true;
            for (auto c : t)
            {
                if (c == 'L')
                    J--;
                if (c == 'R')
                    J++;
                if (c == 'U')
                    I--;
                if (c == 'D')
                    I++;
                if (s[I][J] == '#')
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}