#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;
int main(){
    ll n;
    cin >> n;
    vector<int> a;
    for(int i=0; i<60; i++){
        if(n&(1ll<<i)) a.push_back(i); // nを2進数で表した時に1の位が立っているところを抽出
    }
    // for(auto &nx : a) cout << nx << "\n";
    // cout << a.size() << "\n";
    int k=a.size();
    vector<ll> res;
    for(int i = 0; i < (1<<k); i++){
        ll cur = 0;
        for(int j = 0; j < k; j++){
            if(i&(1<<j)) cur|=(1ll<<a[j]);
        }
        res.push_back(cur);
    }
    sort(res.begin(),res.end());
    for(auto &nx : res) cout << nx << "\n";
    return 0;
}