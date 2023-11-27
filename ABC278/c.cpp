#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;


int main(){
    ll n, q;
    cin >> n >> q;
    set<pair<unsigned, unsigned>> follows;

    for(unsigned _ = 0; _ < q; _++){
        unsigned t, x, y;
        cin >> t >> x >> y;
        x--; y--;
        if(t == 1){
            follows.emplace(x, y);
        }else if(t == 2){
            follows.erase({x, y});
        }else{
            cout << (follows.count({x,y}) && follows.count({y,x}) ? "Yes" : "No") << endl;
        }
    }
}