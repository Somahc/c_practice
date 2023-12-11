#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n,m;
    string s;
    cin >> n >> m;
    cin >> s;
    s += "0";

    int muji = 0, logo = 0, muji_max = 0, logo_max = 0, ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            // muji_max = max(muji_max, muji);
            // logo_max = max(logo_max, logo);
            ans = max(ans, muji + logo - min(m,muji));
            muji = 0;
            logo = 0;
            // cout << "0リセット" << endl;
        }else if(s[i] == '1'){
            muji++;
            // cout << "muji++" << endl;
            // cout << muji << endl;
        }else{
            logo++;
            // cout << "logo++" << endl;
            // cout << logo << endl;
        }
    }

    cout << ans << endl;
    return 0;
}