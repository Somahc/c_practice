#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;
using ll  = long long;

vector<int> p;
int ans = 0;

void solve(int n){
    ans++;
    if(p[n] == 1){
        cout << ans << endl;
        return;
    }else{
        solve(p[n]);
    }
}


int main(){
    int n;
    cin >> n;
    p.resize(n+1);
    for(int i = 2; i <= n; i++){
        cin >> p[i];
    }
    solve(n);
}