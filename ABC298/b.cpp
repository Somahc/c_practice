#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector a(n, vector<int>(n)), b(n, vector<int>(n));
    rep(i,n) rep(j,n) cin >> a[i][j];
    rep(i,n) rep(j,n) cin >> b[i][j];
    rep(i,4){
        bool ok = true;
        rep(i,n)rep(j,n){
            if(a[i][j] == 1 && b[i][j] == 0) ok = false;
        }
        if(ok) {
            cout << "Yes" << endl;
            return 0;
        }

        vector na(n, vector<int>(n));
        rep(i,n)rep(j,n){
            na[i][j] = a[n-1-j][i];
        }
        a = na;
    }
    cout << "No" << endl;
    return 0;
}