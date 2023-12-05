#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); i++)

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> ab;
    rep(i,n){
        int a,b;
        cin >> a >> b;
        ab.emplace_back(a,a+b);
    }
    vector<int> p(n);
    iota(p.begin(),p.end(),0);
    auto f = [&](int i, int j){
        auto [ai, aj] = ab[i];
        auto [bi, bj] = ab[j];
        return (long long)ai * bj > (long long)bi * aj;
    };
    stable_sort(p.begin(), p.end(),f);
    for(int i = 0; i < n; i++){
        cout << p[i] + 1 << " ";
    }
    cout << endl;
    return 0;
}