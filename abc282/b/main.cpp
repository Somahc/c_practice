#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, m, ans=0;
    cin >> n >> m;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            bool ok = true;
            for(int k=0; k<m; k++){
                if(s[i][k] != 'o' && s[j][k] != 'o'){
                    ok = false;
                    // break;
                }
            }
            if(ok) ans++;
        }
    }
    std::cout << ans << endl;
}
