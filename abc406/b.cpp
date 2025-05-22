#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll current = 1;
    ll overflow = pow(10, k);
    // cout << overflow << endl;

    rep(i,n){
        cin >> a[i];
    }

    rep(i,n){

        // ll z;
        // if (__builtin_mul_overflow(current, a[i], &z)){
        //     current = 1;
        // }else{
        //     if (current * a[i] >= overflow) current = 1;
        //     else current *= a[i];
        // }

        int currentKeta = 0;
        ll tmp = current;

        rep(j,22){
            currentKeta++;
            tmp /= 10;

            if(tmp < 1) {
                break;
            }
        }

        int anoKeta = 0;
        tmp = a[i];
        rep(j,22){
            anoKeta++;
            tmp /= 10;

            if(tmp < 1) {
                break;
            }
        }

        cout << "Keta" << currentKeta << endl;
        cout << "a" << anoKeta << endl;

        if(anoKeta + currentKeta - 1 > k) current = 1;
        else current *= a[i];

        cout << "current" << current << endl;
        

        // if (current * a[i] >= pow(10, k)) current = 1;
        // else current *= a[i];
    }

    cout << current << endl;
    return 0;
}