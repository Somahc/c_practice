#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    rep(i, n)
    {
        rep(j, n)
        {
            int a;
            cin >> a;
            if (a)
            {
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}