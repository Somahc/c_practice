#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    vector<int> x(N), y(N);

    for(int i=0; i<N; i++) {
        cin >> x[i] >> y[i];
    }

    vector<vector<bool>> graph(N, vector<bool>(N));

    //与えれた座標について、点iと点jの距離がD以下ならば、点iと点jを結ぶ辺を張る
    for(int i=0; i<N; i++) for(int j=0; j<N; j++) if ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) <= D * D) graph[i][j] = true;

    vector<bool> ans(N);
    ans[0] = true; // 開始点をtrueにする
    queue<int> que; que.push(0);
    while(!que.empty()) {
        int q = que.front(); que.pop();
        for(int i=0; i<N; i++) {
            if(graph[q][i] && !ans[i]) {
                ans[i] = true;
                que.push(i);
            }
        }
    }

    //結果を出力
    for(int i=0; i<N; i++) {
        if(ans[i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}