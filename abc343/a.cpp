#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b;
    cin >> a >> b;
    rep(i, 10)
    {
        if (i != (a + b))
        {
            cout << i << endl;
            return 0;
        }
    }
}