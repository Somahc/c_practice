#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    long long ans = 0;
    cin >> n;
    vector<string> s(n);
    vector<int> gyou(n), retsu(n);
    // bool vis[n][n];

    rep(i,n){
        cin >> s[i];
        int tmp = 0;
        for(auto x : s[i]){
            if(x == 'o') tmp++;
        }
        gyou[i] = tmp;
    }

    rep(i,n){
        int tmp = 0;
        rep(j,n){
            if(s[j][i] == 'o') tmp++;
        }
        retsu[i] = tmp;
    }

    rep(i,n){
        rep(j,n){
            if(s[i][j] == 'o'){
                int gyou_tmp = gyou[i];
                int retsu_tmp = retsu[j];
                ans += (gyou_tmp - 1) * (retsu_tmp - 1);
                // cout << gyou_tmp << " " << retsu_tmp << endl;
            }
        }
    }
    cout << ans << endl;

}
