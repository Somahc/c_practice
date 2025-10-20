#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int s, a, b ,x;
    cin >> s >> a >> b >> x;

    int runSet = x / (a+b);
    int remainingSec = x % (a+b);

    cout << (s*a) * runSet + s * min(remainingSec, a) << endl;
    return 0;
}