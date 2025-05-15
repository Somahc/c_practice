#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);

    rep(i,n){
        cin >> a[i];
    }

    rep(i,n){
        set<int> st;

        rep(j,a.size()) {
            st.insert(a[j]);
        }

        bool isEnough = true;

        for(int j = 1; j <= m; j++) {
            if(!st.count(j)) {
                isEnough = false;
            }
        }

        if(!isEnough) {
            cout << i << endl;
            return 0;
        }

        a.pop_back();
    }

    cout << n << endl;
    return 0;
}