#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, m, ans=0;
    cin >> n >> m;
    bool graph[101][101] = {false};
    bool visited[101] = {false};
    rep(i,m){
        int u, v;
        cin >> u >> v;
        graph[u-1][v-1] = true;
        graph[v-1][u-1] = true;
    }
    rep(i,n){
        if(visited[i] == true) continue;
        queue<int> que;
        que.push(i);
        while(!que.empty()){
            int v = que.front(); que.pop();
            rep(j,n){
                if(graph[v][j] == true && visited[j] == false){
                    visited[j] = true;
                    que.push(j);
                }
            }
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}
