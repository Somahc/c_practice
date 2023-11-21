#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n), odd(n,0), even(n,0);
    rep(i,n) {
        cin >> a[i];
        a[i] % 2 == 0 ? even.emplace_back(a[i]) : odd.emplace_back(a[i]);
    }
    sort(odd.begin(), odd.end(), greater<ll>());
    sort(even.begin(), even.end(), greater<ll>());
    // cout << even[0] + even[1] << endl;
    if(odd.size() < 2 and even.size() < 2) {
        ll ans = a[0] + a[1];
        ans % 2 == 1 ? cout << "-1" << endl : cout << ans << endl;
        return 0;
    }
    ll ans = max(odd[0] + odd[1], even[0] + even[1]);

    ans % 2 == 1 ? cout << "-1" << endl : cout << ans << endl;
}
