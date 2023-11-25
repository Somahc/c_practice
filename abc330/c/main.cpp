#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;
int main() {
    ll d, nijo = 1, cnt = 0;
    cin >> d;
    while(1){
        cnt = nijo*nijo;
        if(cnt >= d) break;
        nijo++;
    }
    if(nijo*nijo == d){
        cout << "0" << endl;
        return 0;
    }
    nijo--;
    ll nijo2 = 1, cnt2 = 0;
    cnt = d - nijo*nijo;
    while(1){
        cnt2 = nijo2*nijo2;
        if(cnt <= cnt2) break;
        nijo2++;
    }
    nijo2--;
    if(nijo2*nijo2 == cnt){
        cout << "0" << endl;
        return 0;
    }

    ll ans = min(abs(nijo*nijo + nijo2*nijo2 - d), abs(nijo*nijo + (nijo2-1)*(nijo2-1) - d));

    cout << nijo << ' ' << nijo2 << endl;
    cout << ans << endl;

    return 0;
}
