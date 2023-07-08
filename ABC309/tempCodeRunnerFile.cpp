#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a == 3 || a == 6 || a == 9) cout << "No" << endl;

    if(a == (b-1)) cout << "Yes" << endl;
    else cout << "No" << endl;
}