#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int a[2][2];
    int r,c;
    cin >> r >> c;
    r--; c--;
    rep(i,2) rep(j,2){
        cin >> a[i][j];
    }
    cout << a[r][c] << endl;
    return 0;
}