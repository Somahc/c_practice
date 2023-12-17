#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    for(int i = 0; i < t.size(); i++){
        if(s[i] != t[i] and i < 2){
            cout << "No" << endl;
            return 0;
        }
        if(s[i] != t[i]){
            if(t[i] == s[i-1] and t[i] == s[i-2]){
                s.insert(s.begin() + (i-1), t[i]);
            }else{
                cout << "No" << endl;
                return 0;
            }
        }
    }
    // cout << s << endl;
    // cout << t << endl;
    cout << "Yes" << endl;
    return 0;
}