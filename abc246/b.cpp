#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    int a,b;
    cin >> a >> b;
    int d2 = a*a + b*b;
    double d = d2;
    d=sqrt(d);
    double dx = a, dy = b;

    // cout << setprecision(10) << dx/d << " " << dy/d << endl;
    printf("%.10f %.10f\n", dx/d, dy/d);
    return 0;
}