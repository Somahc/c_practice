#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

int main(){
    ll x, k;
    cin >> x >> k;
    ll pow10=1;
    rep(i,k){
        x /= pow10;
        int m = x%10;
        if(m >4) x += (10-m);
        else x -= m;
        x*=pow10;
        pow10*=10;
    }
    cout << x << endl;    
    return 0;
}