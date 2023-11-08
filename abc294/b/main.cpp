#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    string alphabets = ".ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    rep(i,h){
        rep(j,w){
            int a;
            cin >> a;
            cout << alphabets[a];
        }
        cout << '\n';
    }
}
