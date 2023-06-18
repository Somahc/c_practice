#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int q;
    cin >> str >> q;

    for (int i=0; i<q; i++) {
        string komando;
        cin >> komando;
        int a, b;
        cin >> a >> b;
        if (komando == "replace") {
            string p;
            cin >> p;
            str = str.substr(0, a) + p + str.substr(b+1);
        }else if (komando == "reverse") {
            string t = str.substr(a, b-a+1);
            reverse(t.begin(), t.end());
            str = str.substr(0, a) + t + str.substr(b+1);
        }else if (komando == "print") {
            string printStr = str.substr(a, b-a+1);
            cout << printStr << endl;
        }
    }
}