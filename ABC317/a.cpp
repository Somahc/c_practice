#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
    int n,m,p,ans=0;
    cin >> n >> m >> p;

    if(n < m) {
        cout << 0 << endl;
        return 0;
    }else{
        int tmp;
        tmp = (n-m) / p;
        ans = tmp + 1;
        cout << ans << endl;
        return 0;
    }

}