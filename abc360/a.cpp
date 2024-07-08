#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    bool isMisoShowed = false;
    cin >> s;
    for (char c : s)
    {
        if (c == 'M')
        {
            isMisoShowed = true;
        }
        if (c == 'R' and isMisoShowed == false)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}