#include <iostream>
#include <string>
using namespace std;

int main() {
    while(1) {
        string s;
        cin >> s;
        if (s == "-") {
            break;
        }

        int n;
        cin >> n;

        for (int i=0; i<n; i++) {
            int h;
            cin >> h;
            s += s.substr(0, h);
            s = s.erase(0, h);
        }

        cout << s << endl;
    }
}