#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    int n, ans = 0;
    cin >> n;
    set<string> st;
    ll highscore = -1;
    rep(i,n){
        string s;
        cin >> s;
        ll t;
        cin >> t;
        if(!st.count(s)){
            st.insert(s);
            if(highscore < t){
                highscore = t;
                ans = i+1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}