#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    int n,ans = 0;
    cin >> n;
    vector<int> a(n), koma;
    rep(i,n) cin >> a[i];
    rep(i,n){
        koma.push_back(0);
        for(auto& x : koma){
            // cout << a[i] << endl;
            x += a[i];
        }
    }
    for(auto x : koma){
        // cout << x << " " << endl;
        if(x > 3) ans++;
    }
    cout << ans << endl;
    return 0;
}
