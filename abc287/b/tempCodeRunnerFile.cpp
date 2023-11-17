#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    set<string> st;
    rep(i,n){
        string s;
        cin >> s;
        st.insert(s.substr(3));
    }
    rep(i,m){
        string t;
        cin >> t;
        if(st.count(t)) ans++;
    }
    cout << ans << endl;
    return 0;
}
