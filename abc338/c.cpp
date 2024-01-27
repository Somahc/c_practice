#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> q,a,b;
    rep(i,n){
        ll tmp;
        cin >> tmp;
        q.push_back(tmp);
    }
    rep(i,n){
        ll tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    rep(i,n){
        ll tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    ll max_dish = 0;
    for(ll i = 0; i <= 1e6; i++){
        vector<ll> q_cp;
        q_cp = q;
        rep(i,n){
            if(q[i] - (a[i] * i) < 0){
                continue;
            }
            q_cp[i] -= a[i] * i;
        }
    }
}