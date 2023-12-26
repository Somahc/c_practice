#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;


int main(){
    int oishiMax = -1;
    int n,k;
    cin >> n >> k;
    vector<int> a(n),b(k);
    rep(i,n) {
        cin >> a[i];
        oishiMax = max(oishiMax, a[i]);
    }
    rep(i,k) cin >> b[i];
    set<int> oishiIndex;
    rep(i,n){
        if(a[i] == oishiMax){
            oishiIndex.insert(i+1);
        }
    }
    for(auto x : b){
        if(oishiIndex.count(x)){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}