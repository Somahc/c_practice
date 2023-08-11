#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main() {
    int n, saikyo = -1;
    cin >> n;
    vector<int> p(n);

    rep(i,n) {
        cin >> p[i];
        if(i != 0) saikyo = max(saikyo, p[i]);
    }

    if(saikyo != -1 && p[0] < saikyo) cout << saikyo - p[0] + 1 << endl;
    else if(saikyo == p[0]) cout << "1" << endl;
    else cout << "0" << endl;
    return 0;


}