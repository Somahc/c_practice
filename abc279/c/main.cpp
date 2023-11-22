#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> s(h), t(h);
    map<string, int> mp, mp_t;

    rep(i,h){
        string a;
        cin >> a;
        s[i] = a;
    }
    
    rep(i,h){
        string a;
        cin >> a;
        t[i] = a;
    }

    rep(i,w){
        string retsu, retsu_t;
        rep(j,h){
            retsu += s[j][i];
            retsu_t += t[j][i];
        }
        if(mp.count(retsu) == 0) mp[retsu] = 1;
        else mp[retsu]++;

        if(mp_t.count(retsu_t) == 0) mp_t[retsu_t] = 1;
        else mp_t[retsu_t]++;
    }
    for(auto x : mp){
        if(mp_t.count(x.first) == 0){
            cout << "No" << endl;
            return 0;
        }
        else if(mp_t[x.first] != x.second){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
