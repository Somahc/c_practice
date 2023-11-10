#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

const long long INF = 1LL << 60;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);

    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while(q--){
        long long b;
        cin >> b;

        int j = lower_bound(a.begin(), a.end(), b) - a.begin();
        long long res = INF;

        // a[j]の左隣と右隣のどちらがbに近いかを調べる
        if (j < n) res = min(res, abs(b - a[j])); // a[j]の左隣
        if (j > 0) res = min(res, abs(b - a[j-1])); // a[j]の右隣

        cout << res << endl;
    }

}