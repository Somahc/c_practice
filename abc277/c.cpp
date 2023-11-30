#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, vector<int>> mp;
    rep(i,n){
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    set<int> reach;
    while(!q.empty()){
        int v = q.front(); q.pop();
        if(reach.count(v)) continue;
        reach.insert(v);
        for(auto x : mp[v]) q.push(x);
    }
    cout << *reach.rbegin() << endl;
}