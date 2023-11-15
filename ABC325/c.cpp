#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
template<class T> using P = pair<T, T>;
int dx[] = {1,0,-1,0,1,1,-1,-1};
int dy[] = {0,1,0,-1,1,-1,1,-1};

int main(){
    int h,w;
    cin >> h >> w;  
    vector<vector<char>> s(h, vector<char>(w));
    rep(i,h) rep(j,w) cin >> s[i][j];
    int ans = 0;
    vector<vector<bool>> used(h, vector<bool>(w));
    rep(i,h) rep(j,w){ // BFS（幅優先探索）
        if(s[i][j] == '.' || used[i][j]) continue;
        queue<P<int>> que;
        que.push({i,j});
        while(!que.empty()){
            P<int> p = que.front(); que.pop();
            int x = p.first, y = p.second;
            rep(d,8){
                int nx = x + dx[d], ny = y + dy[d];
                if(nx >= 0 && nx < h && ny >= 0 && ny < w && s[nx][ny] == '#' && !used[nx][ny]){
                    que.push({nx, ny});
                    used[nx][ny] = true;
                }
            }
        }
        ans++;
    }
    cout << ans << endl;

}