#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> a, b;
    vector<int> ruisekiA(n+1), ruisekiB(n+1);

    rep(i,n){
        int c, p;
        cin >> c >> p;

        if(c == 1){
            a.emplace_back(i,p);
            b.emplace_back(i,0);
        }else{
            b.emplace_back(i,p);
            a.emplace_back(i,0);
        }
        ruisekiA[i+1] = ruisekiA[i] + a[i].second;
        ruisekiB[i+1] = ruisekiB[i] + b[i].second;
    }

    int q;
    cin >> q;
    rep(i,q){
        int l, r;
        cin >> l >> r;

        cout << ruisekiA[r] - ruisekiA[l-1] << " " << ruisekiB[r] - ruisekiB[l-1] << endl;
    }
}