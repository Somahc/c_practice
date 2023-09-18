#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    vector<string> b(r);

    rep(i,r) cin >> b[i];

    vector<vector<bool>> ex(r, vector<bool>(c, false)); // r行c列の2次元配列を作成し、falseで初期化
    rep(i,r)rep(j,c){
        if(isdigit(b[i][j])) {
            int d = b[i][j] - '0';
            rep(ni,r)rep(nj,c){
                if(abs(i-ni)+abs(j-nj) <= d) {
                    ex[ni][nj] = true;
                }
            }
        }
    }

    vector<string> ans(r, string(c, '.'));
    rep(i,r)rep(j,c){
        if(b[i][j] == '#' && !ex[i][j]) ans[i][j] = '#';
    }

    rep(i,r){
        cout << ans[i] << endl;
    }
    return 0;
}