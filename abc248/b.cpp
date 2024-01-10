#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    ll A,B,K,cnt;

    cin >> A >> B >> K;
    cnt = 0;

    while(A < B){
        cnt++;
        A *= K;
    }
    cout << cnt << endl;
}