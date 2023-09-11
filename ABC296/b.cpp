#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    char yoko[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char tate[] = {'1', '2', '3', '4', '5', '6', '7', '8'};
    vector<string> s(8);
    string ans;

    rep(i,8){
        cin >> s[i];
        rep(j,8){
            if(s[i][j] == '*'){
                ans += yoko[j];
                ans += tate[7-i];
            }
        }
    }

    cout << ans << endl;
    return 0;
}