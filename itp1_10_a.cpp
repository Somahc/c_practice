#include <bits/stdc++.h>
#include <cmath>
#include <ios>
#include <iomanip>

using namespace std;

int main() {
    long double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    cout << fixed << setprecision(5) << sqrt(pow((x2-x1), 2) + pow((y2-y1), 2)) << endl;
}