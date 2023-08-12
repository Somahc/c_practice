#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main() {
    int n;
    cin >> n;
    bool throughBar = false, ans = false;
    string s;
    cin >> s;

    rep(i,n) {
        if(s[i] == '|') throughBar = !throughBar;
        if(throughBar && s[i] == '*') ans = true;
    }

    if(ans) cout << "in" << endl;
    else cout << "out" << endl;
}