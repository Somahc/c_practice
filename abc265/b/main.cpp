#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    ll n, m, t;
    cin >> n >> m >> t;
    vector<ll> a, plus;
    for(int i = 0; i < n-1; i++){
        ll tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    rep(i,m){
        ll x, y;
        cin >> x >> y;
        x--;
        a[x] -= y;
    }

    for(int i = 0; i < n-1; i++){
        if(t - a[i] <= 0){
            cout << "No" << endl;
            return 0;
        }
        t -= a[i];
    }
    cout << "Yes" << endl;
    return 0;
}
