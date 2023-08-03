#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, cnt = 1, ans = 0;
    cin >> n >> a >> b;
    // vector<int> c(n);
    ans = a + b;

    for(int i=0; i<n; ++i) {
        int tmp;
        cin >> tmp;
        if(tmp == ans) {
            cout << cnt << endl;
            return 0;
        } else {
            ++cnt;
        }
    }
}