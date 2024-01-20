#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    int n,tak=0, aok=0;
    cin >> n;
    rep(i,n){
        int tmp, tmp2;
        cin >> tmp >> tmp2;
        tak += tmp;
        aok += tmp2;
    }
    if(tak > aok) cout << "Takahashi" << endl;
    else if(tak == aok) cout << "Draw" << endl;
    else cout << "Aoki" << endl;
    return 0;
}