#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    for(int i = 0; i < t.size(); i++){
        if(t[i] != s[i]){
            cout << i + 1 << endl;
            return 0;
        }
    }
}
