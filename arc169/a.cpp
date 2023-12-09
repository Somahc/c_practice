#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)
using ll  = long long;
int main(){
    int n;
    cin >> n;
    vector<ll> a;
    vector<int> p(n);
    rep(i,n){
        ll tmp;
        cin >> tmp;
        a.emplace_back(tmp);
    }
    for(int i=1; i<n; i++){
        int tmp;
        cin >> tmp;
        p[i] = tmp;

    }
    // rep(j,100){
    //     rep(i,n-1){
    //         a[p[i+1]-1] = a[p[i+1]-1] + a[i+1];
    //     }
    // }

    rep(i,n-1){
        a[p[i+1]-1] = a[p[i+1]-1] + a[i+1];
    }

    // cout << a.back() << endl;

    if(a[0] == 0){
        cout << "0" << endl;
        return 0;
    }
    if(a.back() > 0){
        cout << "+" << endl;
    }else{
        cout << "-" << endl;
    }

    // for(auto x : a){
    //     cout << x << " ";
    // }

    return 0;
}