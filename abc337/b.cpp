#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    string s,ans="";
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(i == 0) ans += s[i];
        else if(s[i] != s[i-1]) ans += s[i];
    }
    // cout << ans << endl;
    if(ans == "ABC" || ans == "A" || ans == "B" || ans == "C" || ans == "AB" || ans == "AC" || ans == "BC") cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}