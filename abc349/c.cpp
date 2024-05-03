#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    transform(t.begin(), t.end(), t.begin(), ::toupper);
    // cout << s;
    int cnt = 0, first = -1, second = -1, third = -1;
    for (char c : s)
    {
        if (c == t[0])
        {
            first = cnt;
            break;
        }
        cnt++;
    }
    if (first == s.size())
    {
        cout << "No" << endl;
        return 0;
    }
    cnt = 0;
    for (int i = (first + 1); i < s.size(); i++)
    {
        if (s[i] == t[1])
        {
            second = cnt;
            break;
        }
        cnt++;
    }
    cnt = 0;
    for (int i = (second + 1); i < s.size(); i++)
    {
        if (s[i] == t[2])
        {
            third = cnt;
            break;
        }
        cnt++;
    }
    if ((first < second && second < third))
    {
        if (first != -1)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    if (first != -1 && first < second && t[2] == 'X')
    {
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}
