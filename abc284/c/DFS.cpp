#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int n,m;
vector<vector<int>> g;
vector<int> vis;

void dfs(int c){
    vis[c] = true;
    for(auto& d : g[c]){
        if(vis[d]) continue;
        dfs(d);
    }
}

int main(){
    cin >> n >> m;
    g.resize(n);
    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    int ans = 0;
    vis.resize(n);
    for(int i=0; i<n; i++){
        if(!vis[i]) ans++, dfs(i);
    }
    cout << ans << endl;
}