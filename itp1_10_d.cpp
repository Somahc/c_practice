#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <ios>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> x(n);
    for (int i=0; i<n; i++) {
        cin >> x[i];
    }
    vector<double> y(n);
    for (int i=0; i<n; i++) {
        cin >> y[i];
    }

    double d1 = 0.0;
    double d2 = 0.0;
    double d3 = 0.0;
    double di = 0.0;

    for (int i = 0; i < n; i++) {
        double d = fabs(x[i] - y[i]);
        d1 += d;
        d2 += d * d;
        d3 += d * d * d;
        di = max(di, d);
    }
    d2 = sqrt(d2);
    d3 = pow(d3, 1.0/3.0);

    cout << fixed << setprecision(5);
    cout << d1 << endl;
    cout << d2 << endl;
    cout << d3 << endl;
    cout << di << endl;

    return 0;
}