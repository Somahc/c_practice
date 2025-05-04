#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<string> s(n, string(n, '.'));
    vector<string> t(n, string(n, '.'));
    vector<string> tmp(n, string(n, '.'));

    rep(j,n){
        cin >> s[j];
    }
    rep(j,n){
        cin >> t[j];
    }

    // cout << endl;
    // rep(i,4){
    //     cout << s[i] << endl;
    // }

    int ans = 9999999;

    rep(k,4){

        int current_ans = 0;

        rep(i,n){
            rep(j,n) {
                tmp[j][n-1-i] = s[i][j];
                if (t[j][n-1-i] != tmp[j][n-1-i]) current_ans++;
            }
        }

        s = tmp;

        // rep(i,n){
        //     cout << s[i] << endl;
        // }

        // cout << endl;

        if (k != 3) current_ans += (k+1); 
        ans = min(ans, current_ans);
    }

    cout << ans << endl;
}