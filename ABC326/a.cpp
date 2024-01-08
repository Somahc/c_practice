#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    int sa;
    sa = abs(x - y);
    if((sa > 2 and x < y) or (sa > 3 and x > y)) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}