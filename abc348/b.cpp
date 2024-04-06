#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> zahyo(n);
    rep(i, n)
    {
        cin >> zahyo[i].first >> zahyo[i].second;
    }
    rep(i, n)
    {
        double kyori = 0;
        int ans = 0;
        rep(j, n)
        {
            double tmp = sqrt((zahyo[i].first - zahyo[j].first) * (zahyo[i].first - zahyo[j].first) + (zahyo[i].second - zahyo[j].second) * (zahyo[i].second - zahyo[j].second));
            if (tmp > kyori)
            {
                kyori = tmp;
                ans = j + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}