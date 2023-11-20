#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    bool flag = false;
    if(s.size() != 8) flag = true;
    if(!isupper(s[0])) flag = true;
    if(s[1] == '0') {
        // cout << "af" << endl;
        flag = true;
    }
    for(int i = 1; i < 7; i++){
        if(!isdigit(s[i])) {
            // cout << "akjsafnf" << endl;
            flag = true;
        }
    }
    if(!isupper(s[7])) {
        // cout << "akjsafnf" << endl;
        flag = true;    
    }
    if(flag) cout << "No" << endl;
    else cout << "Yes" << endl;
}
