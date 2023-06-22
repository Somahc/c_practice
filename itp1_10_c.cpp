#include <bits/stdc++.h>
#include <vector>
#include <cmath>
#include <ios>
#include <iomanip>

using namespace std;

int main() {
    while(1) {
        int n;
        cin >> n;

        if (n == 0) break;

        vector<double> x(n);
        double m = 0.0;
        for (int i=0; i < n; i++) {
            cin >> x[i];
            m += x[i];
        }

        m /= (double)n;

        double s2 = 0.0;
        for (int i=0; i < n; i++) {
            s2 += (x[i] - m) * (x[i] - m);
        }
        s2 /= (double)n;

        cout << fixed << setprecision(5) << sqrt(s2) << endl;
    }
}