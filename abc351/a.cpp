#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a = 0, b = 0;
    rep(i, 9)
    {
        int tmp;
        cin >> tmp;
        a += tmp;
    }
    rep(i, 8)
    {
        int tmp;
        cin >> tmp;
        b += tmp;
    }
    cout << a - b + 1 << endl;
    return 0;
}