#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    ll ans = 0;

    ll x = 1;
    for(int i=1; i<n; i++){
        x *= 26;
        ans += x;
    }
    x = 1;
    rep(i,n){
        ans += x*(s[n-1-i] - 'A');
        x *= 26;
    }
    ans++;
    cout << ans << endl;
}
