#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = -1;
    // rep(i, n-2){
    //     if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
    //         ans = i + 1;
    //         break;
    //     }
    // }

    for(int i = 0; i < n-2; i++){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
}