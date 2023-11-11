#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, x, ans;
    cin >> n >> x;
    rep(i,n){
        int a;
        cin >> a;
        if(a <= x) ans += a;
    }
    cout << ans << endl;
    return 0;
}
