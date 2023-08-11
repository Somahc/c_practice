#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main() {
    int n, saikyo = -1;
    cin >> n;
    vector<int> p(n);

    rep(i,n) {
        cin >> p[i];
        saikyo = max(saikyo, p[i]);
    }

    cout << saikyo - p[0] + 1 << endl;
    return 0;


}