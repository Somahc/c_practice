#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a, b;
    for (int i = 1; i <= n; i++)
    {
        a.push_back(i);
    }
    b = a;
    for (int i = 0; i < r - l + 1; i++)
    {
        b[l + i] = a[r - 1 - i];
    }
    for (auto x : b)
    {
        cout << x << " ";
    }
    cout << endl;
}