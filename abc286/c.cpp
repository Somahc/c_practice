#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;
int main(){
    int n;
    ll a, b, ans = 1e18;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    for(int j = 0; j < n; j++){
        if(j != 0) rotate(s.begin(), s.begin()+1, s.end());
        ll tmp = (ll)j*a;
        for(int i=0; i < (n/2); i++){
            int r = n-1-i;
            if(s[i] != s[r]) tmp += b;
        }
        ans = min(ans, tmp);
    }
    cout << ans << endl;
    return 0;
}