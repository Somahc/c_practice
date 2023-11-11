#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;

    rep(i,n){
        int d; string s;
        // cout << "sの月: " << s << endl;
        cin >> d;
        for(int j=1; j<=d; j++){
            s = to_string(i + 1) + to_string(j);
            // cout << "sは: " << s << endl;
            int tmp = 0;
            rep(k, s.size()-1){
                if(s[k] == s[k+1]) tmp++;
            }
            if(tmp == s.size()-1) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
