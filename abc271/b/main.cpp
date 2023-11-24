#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<vector<int>> a(n);

    rep(i,n){
        int l;
        cin >> l;
        rep(j,l){
            int b;
            cin >> b;
            a[i].push_back(b);
        }
    }
    rep(i,q){
        int c, d;
        cin >> c >> d;
        cout << a[c-1][d-1] << endl;
    }
    // cout << a[0][2] << endl;
}
