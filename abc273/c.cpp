#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    map<ll, int> mp;
    rep(i,n) {
        cin >> a[i];
        mp[a[i]]++;
    }
    // for(int j = mp.size()-1; j >= 0; j--){
    //     cout << mp[j] << endl;
    // }
    vector<int> ans;
    for(auto [key,value] : mp){
        ans.push_back(value);
    }

    for(int j = mp.size()-1; j >= 0; j--){
        cout << ans[j] << endl;
    }
    for(int i = 0; i < n - mp.size(); i++){
        cout << "0" << endl;
    }

    return 0;
}