#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int x, y;
    cin >> x >> y;

    double match = 0;

    rep(i,6) rep(j,6) {
        if ((i+1) + (j+1) >= x || abs(i-j) >= y) {
            match++;
        }
    }

    cout << setprecision(12);
    cout << match / (double)36 << endl;
}