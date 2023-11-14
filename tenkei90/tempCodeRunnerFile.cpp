#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); ++i)

int gcd(unsigned long long int x, unsigned long long int y) { return (x % y)? gcd(y, x % y): y; }

int main(){
    unsigned long long int a, b, c, tmp;
    cin >> a >> b >> c;
    tmp = gcd(a, gcd(b, c));
    cout << a/tmp + b/tmp + c/tmp - 3 << endl;
}