#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size(), ans = 0;
    for(int i=0; i<n;){
        if(s[i] == '0' && s[i+1] == '0' && i+1 < n){
            i+=2;
            ans++;
        }else{
            ans++;
            i++;
        }
    }
    cout << ans << endl;
}
