#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    set<string> T;

    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        if(T.count(s) == 0) {
            T.insert(s);
            ans++;
            reverse(s.begin(), s.end());
            T.insert(s);
        }
    }
    cout << ans << endl;
}