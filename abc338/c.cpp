#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> q(n), a(n), b(n);
    rep(i,n) cin >> q[i];
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];

    int ans = 0;
    for(int x = 0;; x++){
        vector<int> remain(n);
        rep(i,n) remain[i] = q[i] - a[i]*x;
        bool ok = true;
        rep(i,n) if(remain[i] < 0) ok = false;
        if(!ok) break; // Bを作るための材料がなくなってしまったらこれ以上料理Aを作る処理を考えなくていいためBreak
        int y = 1001001001;
        rep(i,n){
            if(b[i] == 0) continue;
            y = min(y, remain[i]/b[i]);
        }
        ans = max(ans, x+y);
    }
    
    cout << ans << endl;
}