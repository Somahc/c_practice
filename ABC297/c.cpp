#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    vector<string> s(h), s2(h);
    rep(i,h){
        cin >> s[i];
    }

    s2 = s;
    rep(i,h){
        rep(j,w-1){
            if(s[i][j] == 'T' && s[i][j+1] == 'T'){
                s[i][j] = 'P';
                s[i][j+1] = 'C';
            }
        }
    }

    rep(i,h){
        cout << s[i] << endl;
    }

    // cout << s[1][1] << endl;
}