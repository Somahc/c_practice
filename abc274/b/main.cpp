#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    rep(i,h){
        cin >> c[i];
    }
    rep(i,w){
        int hako = 0;
        rep(j,h){
            if(c[j][i] == '#') hako++;
        }
        cout << hako << " ";
    }
    cout << endl;
}
