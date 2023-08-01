#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    bool isA = false, isB = false, isC = false;

    cin >> n >> s;

    for(int i=0; i<s.size(); i++) {
        if(s[i] == 'A') isA = true;
        else if(s[i] == 'B') isB = true;
        else if(s[i] == 'C') isC = true;

        if(isA && isB && isC) {
            cout << i+1 << endl;
            return 0;
        }
    }
}