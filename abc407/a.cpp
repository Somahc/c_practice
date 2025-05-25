#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int a,b;
    cin >> a >> b;

    int ans = (double)a / double(b) + 0.5;

    cout << ans << endl;
    return 0;
}