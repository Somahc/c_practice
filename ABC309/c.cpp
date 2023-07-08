#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, ans;
    cin >> n >> k;
    vector<int> a(n+1);
    vector<int> b(n+1);
    ans = -1;

    for(int i=1; i<=n; i++) {
        int days, drugs;
        cin >> days >> drugs;
        a[i] = days;
        b[i] = drugs;
    }

    for(int i=1; i<=n; i++) {
        long long cnt = 0;
        for(int j=1; j<=n; j++) {
            if(a[j] >= i) cnt += b[j];
        }
        if(cnt <= k) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
}