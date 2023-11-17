#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    vector<string> s(n), t(m);
    rep(i,n){
        string str;
        cin >> str;
        s[i] = str;
        // cout << "substr: " << s[i] << endl;
    }
    rep(i,m){
        cin >> t[i];
    }
    rep(i,m){
        bool match = false;
        rep(j,n){
            string suffix = s[j].substr(3);
            if(t[i] == suffix){
                match = true;
            }
        }
        if(match) ans++;
    }
    cout << ans << endl;

}