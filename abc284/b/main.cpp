#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int t;
    cin >> t;
    rep(i,t){
        int n, ans = 0;
        cin >> n;
        rep(j,n){
            long long int a;
            cin >> a;
            if(a % 2 != 0) ans++;
        }
        cout << ans << endl;
    }
}
