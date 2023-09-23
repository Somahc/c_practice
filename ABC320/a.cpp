#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int a,b;
    long long int ans = 0;
    cin >> a >> b;
    ans = pow(a,b) + pow(b,a);
    cout << ans << endl;
}