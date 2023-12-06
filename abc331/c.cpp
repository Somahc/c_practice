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
    rep(i,n){
        cin >> a[i];
        mp[a[i]]++;
        st.insert(a[i]);
    }

    // for(auto x : st){
    //     // cout << x << endl;
    //     ll tmp = 0;
    //     int n = st.size();
    //     for(auto y : st){
    //         mp2[x] = 0;
    //         if(y > x){
    //             tmp += y*mp[y];
    //         }
    //     }
    //     mp2[x] = tmp;
    // }

    for(auto x : st){
        // cout << x << endl;
        ll tmp = 0;
        int n = st.size();
        for(int i = 1; i < n; i++){
            mp2[x] = 0;
            if(st[i] > x){
                tmp += y*mp[y];
            }
        }
        mp2[x] = tmp;
    }


    for(auto x : a){
        ll ans = *lower_bound(st.begin(), st.end(), x);
        cout << mp2[ans] << " ";
    }
    cout << endl;

    return 0;
}