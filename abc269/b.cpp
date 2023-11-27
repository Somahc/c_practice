#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    vector<string> s(10);
    int a = 10, b = 0, c = 10, d = 0;

    rep(i,10){
        cin >> s[i];
    }
    rep(i,10){
        rep(j,10){
            if(s[i][j] == '#'){
                a = min(a,i);
                b = max(b,i);
                c = min(c,j);
                d = max(d,j);
            }
        }
    }
    cout << ++a << " " << ++b << endl;
    cout << ++c << " " << ++d << endl;
}