#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main(){
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), ansA;
    vector<ll> b(m), ansB;
    vector<ll> c(n+m);
    set<ll> stA; set<ll> stB;

    rep(i,n){
        cin >> a[i];
        c[i] = a[i];
        stA.insert(a[i]);
    }
    rep(i,m){
        cin >> b[i];
        c[i+n] = b[i];
        stB.insert(b[i]);
    }
    sort(c.begin(), c.end());
    for(int i=0; i<n+m; i++){
        if(stA.count(c[i])){
            ansA.push_back(i+1);
        }else ansB.push_back(i+1);
    }
    rep(i,ansA.size()) cout << ansA[i] << " ";
    cout << endl;
    rep(i,ansB.size()) cout << ansB[i] << " ";
    cout << endl;



}
