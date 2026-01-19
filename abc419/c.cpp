#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int n;
    cin >> n;
    long long int rMax, rMin, cMax, cMin;
    rMax = -1, cMax = -1;
    rMin = 10000000000, cMin = 10000000000;
    for(int i=0; i<n; i++){
      long long int r, c;
      cin >> r >> c;
      rMin = min(rMin, r);
      rMax = max(rMax, r);
      cMin = min(cMin, c);
      cMax = max(cMax, c);
    }

    int cDiff = cMax - cMin;
    int rDiff = rMax - rMin;

    cDiff = (cDiff + 2 - 1) / 2;
    rDiff = (rDiff + 2 - 1) / 2;

    cout << max(cDiff, rDiff) << endl;
    return 0;
}