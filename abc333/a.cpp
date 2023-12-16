#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    rep(i,n){
        s += to_string(n);
    }
    cout << s << endl;
    return 0;
}