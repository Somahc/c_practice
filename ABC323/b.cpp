#include<bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    rep(i,n){
        v[i].second = i;
        string s;
        cin >> s;
        rep(j,n){
            if(s[j] == 'o') v[i].first++;
        }
    }
    sort(v.rbegin(), v.rend());
    rep(i,n){
        cout << v[i].second + 1 << " ";
    }
    cout << endl;
}