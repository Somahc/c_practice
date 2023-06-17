#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cnt(n+1), ans; //cnt配列は中にはいる要素が1からnであるため、n+1しないとサイズが１つ分足りなくなる
    
    for (int i=0; i<3*n; i++) {
        int a;
        cin >> a;
        ++cnt[a];
        if (cnt[a] == 2) ans.push_back(a); //cnt[a]が2になったらaをansの末尾に追加
    }

    for (int i=0; i<n; i++) {
        cout << ans[i] << (i == n-1 ? "\n" : " "); //最後の周回なら改行、それ以外なら空白を追加
    }
}