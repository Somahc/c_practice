#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    pair<int, int> a,b;
    bool is_a_empty = true;
    rep(i,n){
        cin >> s[i];
        rep(j,m){
            if(s[i][j] == 'o' && is_a_empty){
                a = {i,j};
                is_a_empty = false;
            }else if(s[i][j] == 'o' && !is_a_empty){
                b = {i,j};
            }
        }
    }
    int ans = abs(a.first - b.first) + abs(a.second - b.second);
    cout << ans << endl;
    return 0;
}