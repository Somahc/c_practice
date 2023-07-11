#include <bits/stdc++.h>
using namespace std;

int main() {
    char p, q;
    cin >> p >> q;

    int ans = 0;

    int dist[] = {3, 1, 4, 1, 5, 9};
    if(p > q) {
        char a = p;
        p = q;
        q = a;
    }

    for(int i=(p - '0' - 17); i<((p - '0' - 17) + (q - '0') - (p - '0')); i++) {
        ans += dist[i];
    }

    cout << ans << endl;

    //cout << p - '0' << q - '0' << endl;
}