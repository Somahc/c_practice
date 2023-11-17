#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

// bool compare(string& s1, string& s2){
    
// }s

int main(){
    int n, k;
    cin >> n >> k;
    vector<string> s(k);
    rep(i,n){
        if(i<k) {
            cin >> s[i];
            continue;
        }
        string a;
        cin >> a;
    }
    sort(s.begin(), s.end());

    rep(i,k){
        cout << s[i] << endl;
    }
}
