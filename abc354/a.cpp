#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll h, cnt = 0, plant = 0, nobiru = 1;
    cin >> h;
    while (true)
    {
        if (plant > h)
        {
            cout << cnt << endl;
            return 0;
        }
        cnt++;
        if (plant != 0)
            nobiru *= 2;
        plant += nobiru;
    }

    return 0;
}