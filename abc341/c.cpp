#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int h, w, n, ans = 0;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string> s(h);
    rep(i, h)
    {
        string tmp;
        cin >> tmp;
        s[i] = tmp;
    }

    rep(i, h) rep(j, w)
    {
        if (s[i][j] == '.')
        {
            int next_i = i;
            int next_j = j;
            int k = 0;
            while (k < n)
            {
                if (t[k] == 'L')
                {
                    next_j--;
                }
                else if (t[k] == 'R')
                {
                    next_j++;
                }
                else if (t[k] == 'U')
                {
                    next_i--;
                }
                else
                {
                    next_i++;
                }
                if (s[next_i][next_j] == '#' || next_i < 0 || next_i >= h || next_j < 0 || next_j >= w)
                {
                    break;
                }
                k++;
            }
            if (k == n)
                ans++;
        }
    }
    cout << ans << endl;
}