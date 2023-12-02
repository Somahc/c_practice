#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    map<ll, ll> mp2;
    set<ll> st;

    rep(i, n){
        cin >> a[i];
        mp[a[i]]++;
        st.insert(a[i]);
    }

    for(auto it = st.begin(); it != st.end(); ++it){
        ll x = *it;
        ll tmp = 0;
        for(auto y_it = it; y_it != st.end(); ++y_it){
            ll y = *y_it;
            if(y > x){
                tmp += y * mp[y];
            }
        }
        mp2[x] = tmp;
    }

    for(auto x : a){
        auto it = st.lower_bound(x);
        if (it != st.begin()) {
            --it;
            cout << mp2[*it] << " ";
        } else {
            cout << 0 << " ";
        }
    }
    cout << endl;

    return 0;
}
