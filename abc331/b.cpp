#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    int n,s,m,l;
    cin >> n >> s >> m >> l;
    ll ans = 1e18;
    // int cnt = 0;
    // for(int i = 0; cnt < n; i++){
    //     for(int j = 0; cnt < n; j++){
    //         for(int k = 0; cnt < n; k++){
    //             cnt = 6*i + 8*j + 12*k;
    //             ll tmp = s*i + m*j + l*k;
    //             ans = min(tmp, ans);
    //         }
    //     }
    // }

    for(int i = 0; i <= 17; i++){
        for(int j = 0; j <= 13; j++){
            for(int k = 0; k <= 9; k++){
                if(6*i + 8*j + 12*k >= n){
                    ll tmp = s*i + m*j + l*k;
                    ans = min(tmp, ans);
                    break;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}