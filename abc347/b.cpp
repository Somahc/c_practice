#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    set<string> st;
    string s;
    cin >> s;
    for (int i = 1; i <= s.size(); i++)
    {
        for (int j = 0; j <= s.size() - i; j++)
        {
            st.insert(s.substr(j, i));
            // cout << (s.substr(j, i)) << endl;
        }
    }
    cout << st.size() << endl;
}