#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

struct Edge {
    int to, cost;
    Edge(int to=0, int cost=0) : to(to), cost(cost) {}
};

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<Edge>> g(n);
    rep(i,m){
        int a,b,c;
        cin >> a >> b >> c;
        a--; b--;
        g[a].emplace_back(b,c);
        g[b].emplace_back(a,c);
    }

    int ans = 0;
    vector<bool> visited(n);
    auto f = [&](auto f, int v, int dist) -> void {
        visited[v] = true;
        ans = max(ans, dist);
        for (auto e : g[v]) { // g[v]にはvから行ける頂点とそのコストが入っている
            if (visited[e.to]) continue;
            f(f, e.to, dist+e.cost);
        }
        visited[v] = false;
    };

    rep(i,n) f(f, i, 0);
    cout << ans << endl;
    return 0;
}