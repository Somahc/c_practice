#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    sort(s.begin(), s.end()); // next_permutationは渡された要素を辞書順に並び替えるため、すべてのパターンを試すためはじめにソートする必要がある
    do {
        bool ok = true;
        rep(i,n-1) {
            int d = 0;
            rep(j,m) if(s[i][j] != s[i+1][j]) d++;
            if (d != 1) ok = false;
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    } while(next_permutation(s.begin(), s.end())); // 辞書順に並べ替える
    cout << "No" << endl;
    return 0;
}