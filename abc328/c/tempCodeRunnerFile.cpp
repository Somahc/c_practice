#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> a(n+1, 0);
    rep(i, s.size()){
        if(s[i] == s[i+1]){
            a[i+1] = a[i] + 1;
        }
    }
    rep(i, q){
        int l, r;
        cin >> l >> r;
        cout << a[r-1] - a[l-1] << endl;
    }
}
