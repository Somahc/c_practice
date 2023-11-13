#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n; double tmp = 0.0;
    cin >> n;
    vector<double> x(5*n);
    rep(i,5*n) cin >> x[i];

    sort(x.begin(), x.end());

    for(int i=n; i<4*n; i++){
        // cout << x[i] << endl;
        tmp += x[i];
    }
    double ans = tmp / (double)(3*n);
    // cout << fixed << setprecision(10) << ans << endl;
    cout << ans << endl;
}
