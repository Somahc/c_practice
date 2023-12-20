#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;
// using Graph = vector<vector<int>>;

int main(){
    int n,m,ans = 0;
    cin >> n >> m;
    // Graph g(n);
    vector adj(n, vector<bool>(n));

    rep(i,m){
        int u,v;
        cin >> u >> v;
        u--; v--;
        adj[u][v] = adj[v][u] = true;
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(adj[i][j] and adj[j][k] and adj[k][i]) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}