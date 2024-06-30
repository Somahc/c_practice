#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, ans = 0;
    cin >> n;
    rep(i, n)
    {
        string s;
        cin >> s;
        if (s == "Takahashi")
            ans++;
    }
    cout << ans << endl;
    return 0;
}