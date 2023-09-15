#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);

    rep(i, n){
        cin >> s[i];
        if(s[i] == "and" || s[i] == "not" || s[i] == "that" || s[i] == "the" || s[i] == "you"){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}