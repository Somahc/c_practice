#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    set<char> first = {'H', 'D', 'C', 'S'};
    set<char> second = {'A' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , 'T' , 'J' , 'Q' , 'K'};
    set<string> deta = {};
    rep(i,n){
        string s;
        cin >> s;
        // cout << second.count(s[1]) << endl;
        if(!first.count(s[0]) || !second.count(s[1])){
            // if(deta.count(s)){
            cout << "No" << endl;
            return 0;
            // }
            // deta.insert(s);
        }
        if(deta.count(s)){
            cout << "No" << endl;
            return 0;
        }
        deta.insert(s);
    }
    // for(auto &x : deta) cout << x << endl;
    cout << "Yes" << endl;
    return 0;
}