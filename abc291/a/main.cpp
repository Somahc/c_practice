#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s;
    cin >> s;

    rep(i,s.size()){
        if(isupper(s[i])){
            cout << i + 1 << endl;
            return 0;
        }
    }
}
