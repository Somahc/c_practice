#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<bool> is_loose(n, false);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        a--; b--;
        is_loose[b] = true;
    }

    vector<int> wins;
    rep(i,n) if(!is_loose[i]) wins.push_back(i);

    if(wins.size() == 1) cout << wins[0] + 1 << endl;
    else cout << -1 << endl;
}