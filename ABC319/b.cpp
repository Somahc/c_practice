#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    string ans;

    rep(i, n+1){
        ans += "-";
        for(int j=1; j<=9; j++){
            if((n % j == 0) && (i % (n / j) == 0)){
                ans.pop_back();
                ans += to_string(j);
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}