#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    int n, ans_1 = 0, ans_2 = 0;
    cin >> n;
    vector<ll> a, b;
    set<ll> b_kazu;
    rep(i,n){
        ll tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    rep(i,n){
        ll tmp;
        cin >> tmp;
        b.push_back(tmp);
        b_kazu.insert(tmp);
    }
    rep(i,n){
        if(a[i] == b[i]) ans_1++;
        else if(b_kazu.count(a[i])) ans_2++;
    }
    cout << ans_1 << "\n" << ans_2 << endl;
    return 0;
}