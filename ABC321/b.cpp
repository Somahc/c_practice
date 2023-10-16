#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> scores(n);
    rep(i,n-1) cin >> scores[i];
    // nラウンド目に取る点数を0から100まで全探索
    while(scores.back() <= 100){
        vector<int> b = scores;
        sort(b.begin(), b.end()); 
        int s = 0;
        for(int i = 1; i < n - 1; i++){
            s += b[i];
        }
        if(s >= x) { // x点以上取れる場合を発見した時点で結果を出力し終了
            cout << scores.back() << endl;
            return 0;
        }
        scores.back()++;
    }

    cout << -1 << endl; // 全探索の結果無理だと分かったら-1を出力
    return 0;
    
}