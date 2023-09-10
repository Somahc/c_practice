#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int b1 = 0, b2;
    int rCount = 0;
    bool ok2 = false;
    for(int i=1; i<=8; i++){
        if(s[i-1] == 'B' && b1 == 0) b1 = i;
        else if(s[i-1] == 'B') b2 = i;

        if(s[i-1] == 'R') rCount++;

        if(s[i-1] == 'K' && rCount == 1) ok2 = true;
    }
    if((b1 + b2) % 2 != 0 && ok2) cout << "Yes" << endl;
    else cout << "No" << endl;
}