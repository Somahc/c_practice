#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, l, ans=0;
    cin >> n >> l;
    rep(i,n){
        int a;
        cin >> a;
        if(a >= l) ans++;
    }
    cout << ans << endl;
}
