#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    ll n, k, x, ans = 0;
    cin >> n >> k >> x;
    vector<ll> a;
    rep(i,n){
        ll tmp;
        cin >> tmp;
        while(k > 0 and tmp >= x){
            tmp -= x;
            k--;
        }
        // cout << tmp << endl;
        a.push_back(tmp);
    }
    sort(a.rbegin(), a.rend());

    for(int i = k; i < n; i++){
        ans += (ll)a[i];
    }
    cout << ans << endl;
    return 0;
}