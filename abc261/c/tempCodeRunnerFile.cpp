#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;

    rep(i,n){
        string s;
        cin >> s;
        if(mp[s] == 0) {
            mp[s]++;
            cout << s << endl;
        }
        else {
            cout << s << '(' << mp[s] << ')' << endl;
            mp[s]++;
            return 0;
        }
    }
}
