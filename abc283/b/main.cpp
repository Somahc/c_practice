#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int q;
    cin >> q;
    rep(i,q){
        int query;
        cin >> query;
        if(query == 1){
            int k, x;
            cin >> k >> x;
            a[k-1] = x;
        }else{
            int k;
            cin >> k;
            cout << a[k-1] << endl;
        }
    }
}
