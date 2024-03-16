#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll x;
    cin >> x;
    if (x < 0)
    {
        if (x % 10 == 0)
        {
            cout << x / 10 << endl;
            return 0;
        }
        else
        {
            cout << x / 10 << endl;
            return 0;
        }
    }
    if (x % 10 == 0)
    {
        cout << x / 10 << endl;
        return 0;
    }
    else
    {
        cout << x / 10 + 1 << endl;
        return 0;
    }
}