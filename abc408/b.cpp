#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = unsigned long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> st;

    rep(i,n) {
        int tmp;
        cin >> tmp;
        st.insert(tmp);
    }

    int cnt = 0;
    cout << st.size() << endl;
    for (auto x : st) {
        cnt++;
        cout << x;
        if (cnt != st.size()) {
            cout << " ";
        }
    }


    // for(int i = 0; i < st.size(); i++) {
    //     cout << st[i] << " ";
    // }

    cout << endl;
    return 0;
}