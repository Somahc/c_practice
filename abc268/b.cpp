#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != t[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}