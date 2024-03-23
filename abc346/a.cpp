#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n - 1);

    rep(i, n)
    {
        cin >> a[i];
    }
    rep(i, n - 1)
    {
        cout << a[i] * a[i + 1] << " ";
    }
    cout << endl;
    return 0;
}