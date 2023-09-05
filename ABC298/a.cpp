#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool isRyo = false, isNotHuka = false;
    rep(i,n){
        if(s[i] == 'o') isRyo = true;
        else if(s[i] == 'x') isNotHuka = true;
    }
    if(isRyo && !isNotHuka) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}