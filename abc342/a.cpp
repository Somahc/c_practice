#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i]] == 1)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}