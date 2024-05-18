#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{

    int n, c = 0;
    cin >> n;
    vector<string> s(n);
    rep(i, n)
    {
        int c_tmp;
        cin >> s[i] >> c_tmp;
        c += c_tmp;
    }
    sort(s.begin(), s.end());
    cout << s[c % n] << endl;
    return 0;
}