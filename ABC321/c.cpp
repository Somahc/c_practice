#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;
int main(){
    int k;
    cin >> k;
    vector<long long> a;
    cout << (1<<10) << endl;
    rep(i,1<<10){
        ll x = 0;
        for(int j = 9; j >= 0; j--){
            if(i&(1<<j)){
                x*=10;
                x+=j;
            }
        }
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cout << a[k+1] << endl;
    return 0;
}