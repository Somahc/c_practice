#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));

   rep(i,h) rep(j,w)   cin >> a[i][j];

    rep(i,h){
        rep(j,w){
            int cnt = 0;
            rep(k,h){
                cnt += a[k][j];
            }
            rep(k,w){
                cnt += a[i][k];
            }
            cout << cnt - a[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}