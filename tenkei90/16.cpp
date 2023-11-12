#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main(){
    long long int n;
    int ans = 9999;
    cin >> n;
    vector<long long int> coin(3);

    rep(i,3) cin >> coin[i];
    // sort(coin.begin(), coin.end(), greater<long long int>());

    rep(i,10000){
        for(int j=0; j<(10000-i); j++){
            long long int balance = n - (coin[0]*i + coin[1]*j);
            if(balance < 0) break;
            if(balance % coin[2] == 0){
                int cnt = i+j+balance/coin[2];
                ans = min(ans, cnt);
            }
        }
    }
    cout << ans << endl;
}