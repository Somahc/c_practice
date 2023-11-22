#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    if(s.size() < t.size()){
        cout << "No" << endl;
        return 0;
    }
    // cout << (s.substr(0, t.size()) == t) << endl;
    if(s.size() == t.size()){
        if(s == t){
            cout << "Yes" << endl;
            return 0;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
    for(int i = 0; i < (s.size() - t.size() + 1); i++){
        // cout << s.substr(i, t.size()) << endl;
        if(s.substr(i, t.size()) == t){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
