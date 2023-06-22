#include <bits/stdc++.h>
#include <ios>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, C;
    double rad;
    double PI = acos(-1);

    cin >> a >> b >> C;

    double rad_C, c, S, L, h;
    rad_C = C*M_PI/180.0;
    c = sqrt(a * a + b * b - 2.0 * a * b * cos(rad_C));

    S = a * b * sin(rad_C) / 2.0;
    L = a + b + c;
    h = b * sin(rad_C);


    cout << fixed << setprecision(5);
    cout << S << endl;
    cout << L << endl;
    cout << h << endl;

    return 0;
}