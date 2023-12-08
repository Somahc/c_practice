#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
        --a[i];
    }

    ll x = 0;
    rep(i,n) if(a[i] == i) x++;
    ll ans = x*(x-1)/2;
    rep(i,n){
        if(a[i] <= i) continue;
        if(a[a[i]] == i) ans++;
    }
    cout << ans << endl;
    return 0;
}