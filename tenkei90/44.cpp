#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)
const int INF = (int)1e9;
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }
const long long POW18 = 1000000000000000000LL;
using ll  = long long;

int main(){
    int n, q, start = 0;
    cin >> n >> q;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    rep(i,q){
        int t, x, y;
        cin >> t >> x >> y;
        x--; y--;
        if(t == 1){
            swap(a[(x + start) % n], a[(y + start) % n]);
        }else if(t == 2){
            start = (start - 1 + n) % n;
        }else{
            cout << a[(x + start) % n] << endl;
        }
        // for(auto x : a) cout << x << " ";
        // cout << endl;
    }
    return 0;
}
