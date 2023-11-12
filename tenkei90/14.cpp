#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<long long int> a(n), b(n);

    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long int ans = 0;
    rep(i,n) ans += abs(a[i]-b[i]);

    cout << ans << endl;
}