#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

ll c2(ll n)
{
    return n * (n - 1) / 2;
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();

    ll same = 0;
    map<char, int> cnt;
    for (char c : s)
        cnt[c]++;
    for (auto p : cnt)
    {
        int m = p.second;
        same += c2(m);
    }

    ll diff = c2(n) - same;
    ll ans = diff;

    if (same)
        ans++; // 同じ文字列の入れ替えの場合は必ず本の文字列と同じになるから+1だけでOK（解説放送参照）
    cout << ans << endl;
    return 0;
}