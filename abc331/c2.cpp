#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, vector<int>> mp;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    long long int wa = accumulate(a.begin(), a.end(), 0LL);

    vector<long long> ans(n);
    for(auto [v,i_list] : mp){
        wa-=(long long)v*i_list.size();
        for(auto i:i_list)ans[i] = wa;
    }

    for(auto x:ans)cout << x << ' ';

    return 0;
}
