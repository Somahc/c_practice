#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, cnt = 0, ans = -1;
    string s;
    cin >> n >> s;

    rep(i,n){
        if(s[i] == 'o') cnt++;
        else{
            if(cnt > 0) ans = max(ans, cnt);
            cnt = 0;
        }
    }
    if(cnt > 0){
        if(n != cnt) ans = max(ans, cnt); // 全てoだとしたらcntはnと等しくなるので弾く
    }

    cout << ans << endl;
}