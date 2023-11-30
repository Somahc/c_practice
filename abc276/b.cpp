#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    map<int, vector<int>> mp;
    for(int i = 1; i<=n; i++){
        mp[i].push_back(0);
    }
    rep(i,m){
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    // sort(mpx/.second.begin(), mp.second.end());
    for(auto &x : mp){
        if(x.second.size() == 1){
            cout << "0" << endl;
            continue;
        }
        cout << x.second.size() - 1 << " ";
        // cout << (x.second ? x.second.size() : "0") << " ";
        sort(x.second.begin(), x.second.end());
        for(auto &y : x.second) y != 0 ? cout << y << " " : cout << "";
        cout << endl;
    }
    return 0;
}