#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    ll daburi = 0;
    set<char> st;
    cin >> s;
    string t = string(1, s[0]);
    st.insert(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != s[i - 1])
        {
            t += s[i];
            if (st.count(s[i]))
            {
                daburi++;
            }
        }
        st.insert(s[i]);
    }
    if (t.size() < 3)
    {
        cout << t.size() << endl;
        return 0;
    }
    else
    {
        // cout << (t.size() * (t.size() - 1) / 2) - (t.size() - st.size()) << endl;
        // cout << (t.size() * (t.size() - 1) / 2) - daburi << endl;
        cout << (t.size() * (t.size() - 1) / 2) + 1 - daburi << endl;
        // cout << daburi << endl;
        // cout << t.size() - st.size();
        return 0;
    }
}