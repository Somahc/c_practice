#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    rep(i, n)
    {
        int tmp;
        cin >> tmp;
        if (tmp % k == 0)
            cout << tmp / k << " ";
    }
    cout << endl;
    return 0;
}