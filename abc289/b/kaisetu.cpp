#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<bool> re(n+1);
    rep(i,m){
        int a;
        cin >> a;
        re[a] = true;
    }
    vector<int> b;
    rep(i, n+1) if (!re[i]) b.push_back(i);

    vector<int> ans(n);
    rep(i,n) ans[i] = i+1;
    rep(i,b.size()-1) {
        reverse(ans.begin()+b[i], ans.begin()+b[i+1]);

    }
    rep(i,n) cout << ans[i] << endl;
    cout << endl;
}