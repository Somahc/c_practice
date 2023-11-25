#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    for(int i = 0; i < n; i++){
        ll ans = 0;
        // ll ab = abs(j - a[i]);
        if(a[i] >= l and a[i] <= r){
            ans = a[i];
            // break;
        }else if(a[i] < l){
            ans = l;
            // break;
        }else if(a[i] > r){
            ans = r;
            // break;
        }
        cout << ans << " ";
    }
    cout << endl;
}