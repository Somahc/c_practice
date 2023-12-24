#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if((a <= b and b <= c) or (a >= b and b >= c)){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}