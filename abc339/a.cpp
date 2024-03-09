#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main(){
    string s;
    int max_dot = -1;
    cin >> s;
    rep(i,s.size()){
        if(s[i] == '.'){
            max_dot = max(max_dot, i);
        }
    }
    for(int i = max_dot+1; i < s.size(); i++){
        cout << s[i];
    }
    cout << endl;
    return 0;
}