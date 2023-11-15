#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);

    rep(i,n) cin >> s[i];
    for(int i = n-1; i >= 0; i--){
        cout << s[i] << endl;
    }
}
