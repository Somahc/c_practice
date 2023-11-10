#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<int>> a(H, vector<int>(W));

    rep(i,H) rep(j,W)  cin >> a[i][j];

    vector<int> yoko(H,0);
    vector<int> tate(W,0);

    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j){
            yoko[i] += a[i][j];
            tate[j] += a[i][j];
        }
    }

    rep(i, H) rep(j,W){
        cout << yoko[i] + tate[j] - a[i][j] << ' ';
    }
    cout << endl;
}