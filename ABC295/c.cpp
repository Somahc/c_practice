#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;
    map<int, int> mp;
    rep(i,n){
        int a;
        cin >> a;
        mp[a]++;
    } 

    for(auto [col, num] : mp){
        ans += num/2;
    }

    cout << ans << endl;
    return 0;

}