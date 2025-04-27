#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
    int n,m,q;
    cin >> n >> m >> q;
    vector<set<int>> contest(m);
    set<int> zenbudereru;


    rep(i,q) {
        int type;
        cin >> type;
        if (type == 1) {
            int x,y;
            cin >> x >> y;
            x--;
            y--;
            contest[y].insert(x);


        }
        if (type == 2) {
            int x;
            cin >> x;
            x--;
            zenbudereru.insert(x);
        }
        if (type == 3) {
            int x,y;
            cin >> x >> y;
            x--;
            y--;
            if(zenbudereru.count(x) || contest[y].count(x)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}