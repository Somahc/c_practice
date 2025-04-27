#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n,d;
    cin >> n >> d;
    vector<int> a(n);
    map<int, set<int>> s;

    int ans = 0;


    rep(i,n) {
        int tmp;
        cin >> tmp;
        a[i] = tmp;
        s[tmp].insert(i);

    }


    rep(i,n - 1) {
        int mae, ato;
        mae = a[i] - d;
        ato = a[i] + d;

        if(mae > 0) {
            // if (s[mae].find(i) != s[mae].end()) {
                auto itr = s[mae].upper_bound(i);
                int cnt = distance(itr, s[mae].end());
                cout << i << " " << cnt << endl;
                cout << *itr << endl;
                // ans += cnt;
                if (cnt > 0) {
                    ans++;
                    continue;
                }
                // s[mae].erase(itr, s[mae].end());

            // }
        }
        // if (s[ato].find(i) != s[ato].end()) {
            auto itr = s[ato].upper_bound(i);
            int cnt = distance(itr, s[ato].end());
            cout << i << " " << cnt << endl;
            cout << *itr << endl;
            // ans += cnt;
            if (cnt > 0) {
                ans++;
                continue;
            }
            // s[ato].erase(itr, s[ato].end());
        // }

    } 

    cout << ans << endl;
    return 0;
}

// それぞれの数字が何番目に自分があるのかの情報を持っておく
// 例：1 -> 2番目と6番目, 3 -> 1番目と4番目　など
// 数列aをの数字を最初から見てく。その数字の持ってる番号の中にその数字のindexより大きいものがあれば全て削除
// 削除した回数を見れば答え