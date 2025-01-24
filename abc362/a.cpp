#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int r, g, b;
    cin >> r >> g >> b;
    string c;
    cin >> c;

    if (c == "Red") cout << min(g, b); 
    else if (c == "Green") cout << min(r, b);
    else cout << min(r, g);

    cout << endl;

    return 0;

}