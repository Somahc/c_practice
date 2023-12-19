#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 1 << endl;
        return 0;
    }
    ll ans = 1; 
    rep(i,n){
        ans *= 2;
    }
    cout << ans << endl;
    return 0;
}
