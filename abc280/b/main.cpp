#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    // vector<long long> sum(n+1);

    rep(i,n){
        cin >> a[i];
        // sum[i+1] = sum[i] + a[i];
    }

    rep(i,n){
        if(i == 0) cout << a[0] << " ";
        else cout << a[i] - a[i-1] << " ";
    }
    cout << endl;
}
