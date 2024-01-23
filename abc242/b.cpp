#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    string s;
    vector<char> ans;
    cin >> s;
    rep(i, s.size()){
        ans.push_back(s[i]);
    }
    sort(ans.begin(), ans.end());

    rep(i, s.size()){
        cout << ans[i];
    }
    cout << endl;
    return 0;
}