#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,s,k, ans=0;
    cin >> n >> s >> k;
    rep(i, n){
        int p,q;
        cin >> p >> q;
        ans += (p*q);
    }
    if(ans<s) ans+=k;
    cout << ans << endl;
    return 0;
}