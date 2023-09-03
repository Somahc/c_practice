#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main() {
    int n,d,p;
    cin >> n >> d >> p;
    int kouka = p/d;
    int koukaAriNissu = 0;
    vector<int> f(n);
    int tmp=0;
    int tmp2 = 0;
    rep(i,n) {
        cin >> f[i];
        tmp += f[i];
        if(kouka > f[i]) {
            koukaAriNissu++;
        }
    }
    if(tmp <= p) {
        cout << tmp << endl;
        return 0;
    }else{
        int tukauNissu = koukaAriNissu / d;
        // cout << tukauNissu << endl;
        sort(f.begin(), f.end());
        tmp = 0;
        for(int i=tukauNissu * d - 1; i<n; i++) {
            tmp += f[i];
        }
        tmp += p * d;

        tukauNissu++;
        for(int i=tukauNissu * d - 1; i<n; i++) {
            tmp += f[i];
        }
        tmp2 += p * d;
    }

    if(tmp > tmp2) {
        cout << tmp2 << endl;
    }else{
        cout << tmp << endl;
    }
}