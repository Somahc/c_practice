#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int main(){
    int n; long k; long distance = 0L;
    cin >> n >> k;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) distance += abs(a[i]-b[i]);

    if(distance > k){
        cout << "No" << endl;
        return 0;
    }
    if((k-distance)%2 == 0){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}