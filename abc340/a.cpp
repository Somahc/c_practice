#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    while (a != b)
    {
        cout << a << " ";
        a += d;
    }
    cout << a << endl;
    return 0;
}