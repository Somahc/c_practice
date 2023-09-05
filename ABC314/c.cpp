#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> c(n);
    rep(i,n) cin >> c[i];
    vector<vector<int>> ps(m); // 縦が色、横がその色の位置
    rep(i,n) ps[c[i]-1].push_back(i); // 対応する色の行にその色の位置を追加していく

    string ans = s;
    rep(i,m){
        int l = ps[i].size();
        rep(j,l){
            ans[ps[i][(j+1)%l]] = s[ps[i][j]]; // その色の位置を1つずらした位置に、その色の位置を入れる.割った余りを使うことで最後の位置の次は最初の位置になる
        }
    }
    cout << ans << endl;
    return 0;
}