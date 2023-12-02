#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = unsigned long long;
int main(){
    ll a,b,c,d,e,f;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    ll WARU = 998244353;
    ll x, y, ans;

    x = ((((a % WARU)*(b%WARU))%WARU) * (c%WARU))%WARU;
    y = ((((d % WARU)*(e%WARU))%WARU) * (f%WARU))%WARU;
    cout << (x - y + WARU) % WARU << endl;
    return 0;


}