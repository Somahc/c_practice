#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
    int n, h, x;
    cin >> n >> h >> x;

    rep(i, n) {
        int p, afterHealed = 0;
        cin >> p;
        afterHealed = p + h;
        if(afterHealed >= x) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}