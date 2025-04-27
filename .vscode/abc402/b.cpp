#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    queue<int> q;
    int q_num;
    cin >> q_num;

    rep(i,q_num) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            q.push(x);
        } else {
            cout << q.front() << endl;
            q.pop();
        }
    }
}