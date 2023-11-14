#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

long long gcd(long long x, long long y) {
    if(y == 0) return x;
    return gcd(y, x%y);
}

long long a, b, c;

int main(){
    cin >> a >> b >> c;
    long long tmp = gcd(a, gcd(b, c));
    cout << (a/tmp - 1LL) + (b/tmp - 1LL) + (c/tmp - 1LL) << endl;
    return 0;
}