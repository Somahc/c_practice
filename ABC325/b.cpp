#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
    int n, ans = -1;
    cin >> n;
    vector<int> w(n), x(n);
    rep(i,n) cin >> w[i] >> x[i];

    rep(i,24){
        int cnt = 0;
        rep(j,n){
            int localTime = 0;
            if(x[j] + i > 24) localTime = x[j] + i - 24;
            else localTime = x[j] + i;

            if(localTime >= 9 && localTime <= 17) cnt += w[j];
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;
}