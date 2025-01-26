#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    int AB2 = (ax - bx) * (ax - bx)+ (ay - by) * (ay - by);
    int BC2 = (bx - cx) * (bx - cx)+ (by - cy) * (by - cy);
    int AC2 = (ax - cx) * (ax - cx)+ (ay - cy) * (ay - cy);

    if (AB2 + BC2 == AC2 || BC2 + AC2 == AB2 || AC2 + AB2 == BC2) {
        cout << "Yes" << endl;
        return 0;
    }
    
    cout << "No" << endl;
    
    return 0;

}